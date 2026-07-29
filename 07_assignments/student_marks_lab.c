#include <stdio.h>
#define MAX 500
#define SUB 3

int n;

/* input function */
void input(char (*arrayname)[MAX], int (*marks)[SUB])
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter student %d name: ", i + 1);
        scanf("%s", arrayname[i]);

        printf("Enter 3 subjects marks: ");
        for (int j = 0; j < SUB; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
}

/* average function */
float avg(int (*marks)[SUB], int row)
{
    int total = 0;
    for (int i = 0; i < SUB; i++)
    {
        total += marks[row][i];
    }
    return total / (float)SUB;
}

/* find highest average */
char *highest_avg(char (*arrayname)[MAX], int (*marks)[SUB])
{
    float max = -1;
    char *top_ptr = NULL;

    for (int i = 0; i < n; i++)
    {
        float a = avg(marks, i);
        if (a > max)
        {
            max = a;
            top_ptr = arrayname[i];
        }
    }
    return top_ptr;
}

/* string copy */
void string_copy(char dest[], char src[])
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

/* sort students by average (descending) */
void sort(char (*arrayname)[MAX], int (*marks)[SUB])
{
    char tempname[MAX];
    int tempmarks[SUB];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (avg(marks, j) < avg(marks, j + 1))
            {
                /* swap names */
                string_copy(tempname, arrayname[j]);
                string_copy(arrayname[j], arrayname[j + 1]);
                string_copy(arrayname[j + 1], tempname);

                /* swap marks */
                for (int k = 0; k < SUB; k++)
                {
                    tempmarks[k] = marks[j][k];
                    marks[j][k] = marks[j + 1][k];
                    marks[j + 1][k] = tempmarks[k];
                }
            }
        }
    }
}
void formatting(char (*arrayname)[MAX], int (*marks)[SUB])
{

    printf("-----------------------------------------------------------------------------------------\n");
    printf("Name\t\tSub1\tSub2\tSub3\tAverage\t\tRank\n");
    printf("-----------------------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t\t%d\t%d\t%d\t%f\t%d\n", arrayname[i], marks[i][0], marks[i][1], marks[i][2], avg(marks, i), i + 1);
    }
}

int main()
{
    int marks[MAX][SUB];
    char arrayname[50][MAX] = {0};

    printf("Enter number of Students: ");
    scanf("%d", &n);

    input(arrayname, marks);

    sort(arrayname, marks);
    formatting(arrayname, marks);
    printf("\nTopper is: %s\n", highest_avg(arrayname, marks));

    return 0;
}
