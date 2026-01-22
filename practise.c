#include <stdio.h>
int main()
{
    int a = 100;
    if (a = 5)//Logical error 
        printf("Condition is true\n");
    else
        printf("False\n");





int x=10;
int y=printf("%d\n",sizeof(x++));//does not evaluate its operand when the operand is not a VLA,
// therefore x++ is not executed and x remains unchanged.
printf("%d\n",x);



if (printf("Hanan Qaisar\n"))//it show that if condition evalute or runs the condition and return the 
//non-zero value which is true
{
    printf("Condition is true \n");
}
else
    printf("Condition is not true \n");

if (! printf("Hanan Qaisar\n"))//it show that if condition evalute or runs the condition
//in this printf return any non-zero value which is considerd as true and then not operator
//will make it 0 mean false then so, ELSE executes
{
    printf("Condition is true \n");
}
else
    printf("Condition is not true \n");



int varx;
varx=printf("Hello this is ");//it show that in variable statement execute
printf("%d\n",varx);//it will print lenght bcz x store numbers

printf("%d\n", printf("Hanan Qaisar (Remember this line of code how it works?) "));
//it work bca 1 compiler go to after , there it will print my wriiten string and then that string
//will return number of chracter bcz printf statment are used for output and it can return number also
// then after my string number of chracter prints


}
