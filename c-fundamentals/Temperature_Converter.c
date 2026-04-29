#include <stdio.h>

float celsiusToFahrenheit(float ces);
float fahrenheitToCelsius(float farhn);
void table();
void printHistory(float array1[], float array2[], int count1, int count2);

int main()
{
  float ces, fah;
  int choice;
  int static count1, count2 = 0;
  float arr1[100];
  float arr2[100];

  table();
  printf("Enter choice: ");
  scanf("%d", &choice);

  while (choice != 0)
  {
    switch (choice)
    {
    case 1:
      printf("Enter Celsius to convert into Fahrenheit: ");
      scanf("%f", &ces);
      if (ces == 0)
      {
        printf("Enter Celsius to convert into Fahrenheit: ");
        printf("\t\tGoodBye\n\tHave a nice day()'.')");
        return 0;
      }
      arr1[count1++] = celsiusToFahrenheit(ces);
      printf("After converting the value is: %.2f\n", celsiusToFahrenheit(ces));
      table();
      printf("Enter choice: ");
      scanf("%d", &choice);
      break;

    case 2:
      printf("Enter Fahrenheit to convert into Celsius: ");
      scanf("%f", &fah);
      if (fah == 0)
      {
        printf("\t\tGoodBye\n\tHave a nice day()'.')");
        return 0;
      }
      arr2[count2++] = fahrenheitToCelsius(fah);
      printf("After converting the value is: %.2f\n", fahrenheitToCelsius(fah));
      printf("Enter choice: ");
      scanf("%d", &choice);
      table();
      break;

    case 3:
      printHistory(arr1, arr2, count1, count2);
      table();
      printf("Enter choice: ");
      scanf("%d", &choice);
      break;
    default:
      printf("\t\tStay Healthy ==('-')==\n");
    }
  }
  return 0;
}

float celsiusToFahrenheit(float ces)
{
  return (ces * 9.0 / 5.0) + 32;
}

float fahrenheitToCelsius(float farhn)
{
  return (farhn - 32) * 5.0 / 9.0;
}

void table()
{

  printf("===========Table============\n\n");
  printf("0. End\n");
  printf("1. Celsius into Fahrenheit\n");
  printf("2. Fahrenheit into Celsius\n");
  printf("3. History\n\n");
  printf("============================\n");
  printf("============================\n");
}
void printHistory(float array1[], float array2[], int count1, int count2)
{
  printf("=======History=======\n");
  printf("Celsius into Fahrenheit\n");
  for (int i = 0; i < count1; i++)
  {

    printf("%-10f\n", array1[i]);
  }
  printf("Fahrenheit into Celsius\n");
  for (int i = 0; i < count2; i++)

    printf("%-10f\n", array2[i]);
}