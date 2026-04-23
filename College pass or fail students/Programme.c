
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void table(int size, int result[], int total)
{
    int highest = -1;
    int index = 0;
    printf("=======Table=======\n");
    for (int i = 1; i <= size; i++)
    {
        printf("%-2d) %-3d marks out of %d\n", i, result[i], total);
        if (result[i] > highest)
        {
            highest = result[i];
            index = i;
        }
    }
    printf("====================\n");
    printf("Highest marks in class: %3d\n", highest);
}
int main()
{

    int students;
    int i = 1;
    int total;
    int size;
    int random;
    int passNo, failNo = 0;

    srand(time(NULL));

    printf("Enter strenght of class:");
    scanf("%d", &size);

    int result[size];

    while (i <= size)
    {
        random = (rand() % 2) + 1;
        if (random == 1)
        {

            result[i] = (rand() % 100) + 1;
            ++passNo;
        }
        else if (random == 2)
        {
            result[i] = (rand() % 32) + 1;
            ++failNo;
        }
        else
            printf("Sorry you enter wrong number\n");
        i++;
    }

    table(size, result, 100);

    printf("Total pass student is %d\n", passNo);
    printf("Total fail student is %d\n", failNo);
    printf("Total student was %d\n", passNo + failNo);

    printf("Thanks for using this programme  -=(',')=-\n");

    return 0;
}