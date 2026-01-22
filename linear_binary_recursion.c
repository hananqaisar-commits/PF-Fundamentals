#include <stdio.h>
// function prototype---------------------------------------
int linear(int arr1[], int size1, int key);
int binary(int arr2[], int low, int high, int key);
//main function----------------------------------------------------------
int main()
{

    int size1,size2;
    int key;

    printf("Enter linear array size:");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Arrary for linear searching is:");
     for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
     printf("Enter binary array size:");
     scanf("%d", &size2);
     int arr2[size2];
    printf("Arrary of %d element for binary searching is:",size2);
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

   
    printf("Enter key:");
    scanf("%d", &key);
    // function calls-------------------------------------------------------

    int result1 = linear(arr1, size1, key);
    if (result1 != 0)
    {
        printf("Key is found in linear\n");
    }
    else
    {
        printf("Key is not found in linear\n");
    }
    int result2 = binary(arr2, 0, size2 - 1, key);
    if (result2 != 0)
    {
        printf("Key is found in binary\n");
    }
    else
        printf("Key is not found in binary\n");

    return 0;
}
// function definitions------------------------------------------------
int linear(int arr1[], int size1, int key)
{

    if (size1 < 1)
        return 0;
    if (arr1[0] == key)
        return 1;

    int result = linear(arr1 + 1, size1-1 , key); // arr1+1 in this arr1 is variable name so don't confuse in it  it simple mean arr1+1
    return result;
}


int binary(int arr2[], int low, int high, int key)
{

    int mid;
    if (low>high) return 0;//when this condition become true then recursion stop...
  
    mid = (low + high) / 2;
 
    if (arr2[mid] == key)
        return 1;
    else if (key > arr2[mid])
    {
       return binary(arr2, mid + 1, high, key);
    }
    else if (key < arr2[mid])
    {
       return binary(arr2, low, mid - 1, key);
    }
 
}
