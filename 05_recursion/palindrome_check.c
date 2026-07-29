#include <stdio.h>
int palindrome(char arr[], int start, int end)
{

    if (start >= end) // base case
    {
        return 1;
    }
    if (arr[start] == arr[end])
        return 0;

    return palindrome(arr, start + 1, end - 1);
}
int main()
{
    int size;
    printf("Enter size of array:");
    scanf("%d", &size);

    char arr[size];
    printf("Enter string:");
    scanf("%s", arr);

    int result = palindrome(arr, 0, size - 1);

    if (result!=0)
    {
        printf("yes,it is palindrome");
    }
    else
        printf("not palindrome");

    return 0;
}