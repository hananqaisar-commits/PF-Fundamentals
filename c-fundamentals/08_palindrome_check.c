// Program 08 - Palindrome Check (Using Loop)
// Output Example: 121 → Palindrome | 123 → Not Palindrome

#include<stdio.h>
int main(){

    int number;
    int reminder;
    int reverse = 0;
    int temp;

    printf("Enter any number: ");
    scanf("%d", &number);

    temp = number; // save original for comparison

    while (number > 0)
    {
        reminder = number % 10;          // extract last digit
        reverse  = reverse * 10 + reminder; // build reversed number
        number   = number / 10;          // remove last digit
    }

    if (reverse == temp)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}
