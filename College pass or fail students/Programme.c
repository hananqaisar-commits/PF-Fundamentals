/*A college offers a course that prepares students for the state licensing exam for realestate brokers. Last year, 10 of the students who completed this course took the licensing examination. Naturally, the college wants to know how well its students did on the
exam. You’ve been asked to write a program to summarize the results. You’ve been
given a list of these 10 students. Next to each name a 1 is written if the student passed
the exam or a 2 if the student failed.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    
    int students, q; // q is fazool
    int pass = 0;
    int fail = 0;
    int num1, num2, pf; // pf mean Pass or Fail
    int i = 1;
    int total;
    int size;
    
    srand(time(0));

    printf("Enter strenght of class:");
    scanf("%d", &size);

    printf("Enter Pass or Fail(1=pass 2=Fail):\n");
    
    while (i <= size)
    {
         pf=(rand()%2)+1;
        if (pf == 1)
        {
            pass++;
        }
        else if (pf == 2)
        {
            fail++;
        }
        else
            printf("Sorry you enter wrong number\n");
        i++;
    }
    num1 = pass;
    num2 = fail;

    printf("Total pass student is %d\n", num1);
    printf("Total fail student is %d\n", num2);
    printf("Total student was %d\n", num1+num2);

    printf("Thanks for using this programme");

    return 0;
}