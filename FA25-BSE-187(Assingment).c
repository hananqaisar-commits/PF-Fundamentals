#include <stdio.h>
#define MAX 200
int n;

struct healthcare
{
    char firstname[MAX];
    char secondname[MAX];
    char gender[10];
    int date;
    int month;
    int birthyear;
    float weight;
    float height;
};

void profile(struct healthcare person1[]);
int calc_age(struct healthcare personage, int currentyear);
int heartrate(int current_age);
void heratrange2(float *min, float *max, int max_heartrate);
float BMI(float weight,float height);
void displayBMIChart(void);

int main()
{
    printf("Enter numbers of pateints: ");
    scanf("%d", &n);
    int current_year = 2025;
    struct healthcare person1[n];//i made a array of struct variable 

    // getting input from user
    profile(person1);// remember i am passing an arrey

    // for displaying output
    for (int i = 0; i < n; i++)
    {
        printf("\nFirst name is :%s\n", person1[i].firstname);
        printf("Last name is :%s\n", person1[i].secondname);
        printf("Gender is :%s\n", person1[i].gender);
        printf("Date is :%d\n", person1[i].date);
        printf("Month is :%d\n", person1[i].month);
        printf("Birth year is :%d\n", person1[i].birthyear);
        printf("Weight is :%f\n", person1[i].weight);
        printf("Height is :%f\n", person1[i].height);
    }

    // calculate person current age
    int calculate_age[n];
    int max_heartrate[n];
    float min[n];
    float max[n], heart_range[n];
    float bmi[n];
    for (int i = 0; i < n; i++)//loop to calculate all functions
    {
        calculate_age[i] = calc_age(person1[i], current_year);

        // calculate max_heartrate
        max_heartrate[i] = heartrate(calculate_age[i]);

        // to calculate heart beat range minimuin and maximuim
         heratrange2(&min[i], &max[i], max_heartrate[i]);

        //bmi calculator
        bmi[i]=BMI(person1[i].weight,person1[i].height);
    }
printf("-------------------Result----------------------");
    for (int i = 0; i < n; i++)
    {
        printf("\n%s %s age is: %d\n", person1[i].firstname, person1[i].secondname, calculate_age[i]);
        printf("%s %s heart rate is: %d\n", person1[i].firstname, person1[i].secondname, max_heartrate[i]);
        printf("%s %s heart rate range min is: %f  and max is %f\n", person1[i].firstname, person1[i].secondname, min[i],max[i]);
        printf("%s %s BMI is %2f\n", person1[i].firstname, person1[i].secondname,bmi[i]);
    }
    puts("");
    displayBMIChart();
}


void profile(struct healthcare person1[])
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter first name: ");
        scanf("%s", person1[i].firstname);
        printf("Enter Last name: ");
        scanf("%s", person1[i].secondname);
        printf("Enter Gender: ");
        scanf("%s", person1[i].gender);
        printf("Enter date: ");
        scanf("%d", &person1[i].date);
        printf("Enter Month: ");
        scanf("%d", &person1[i].month);
        printf("Enter birth year: ");
        scanf("%d", &person1[i].birthyear);
        printf("Enter Height (in inches): ");
        scanf("%f", &person1[i].height);
        printf("Enter Weight (in pounds): ");
        scanf("%f", &person1[i].weight);
    }
}
int calc_age(struct healthcare personage, int currentyear)
{
    int currentage = 0;

    currentage = currentyear - personage.birthyear; // beacuse i stored the structure in personage array variable

    return currentage;
}
int heartrate(int current_age)
{
    return 220 - current_age;
}
void heratrange2(float *min, float *max, int max_heartrate)
{
 
    {
        *min = max_heartrate * 0.50;
        *max = max_heartrate * 0.85;   
    }
}
float BMI(float weight,float height){
    
    return (weight*703)/(height*height);
}
void displayBMIChart(void) {
    printf("\n----- BMI VALUES -----\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal:      18.5 - 24.9\n");
    printf("Overweight:  25.0 - 29.9\n");
    printf("Obese:       30.0 or greater\n");
}