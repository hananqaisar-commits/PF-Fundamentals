#include<stdio.h>
void itislower(char num2);
void itisupper(char num2);
void itis_specialchar(char num3);
void convertlower(char string[]);
void convertupper(char string[]);
int strlen2(char str[]);
int main(){

    char num;
    char string[100];

    printf("Enter any chracter:");
    scanf(" %c",&num);//space toignore previous new line

    getchar();
    printf("Enter any word :");
    fgets(string, sizeof(string), stdin);

    itislower(num);
    itisupper(num);
    itis_specialchar(num);
    convertlower(string);
    convertupper(string);
    int result=strlen2(string);
    puts("Lenght of your string is: ",result);

    return 0;
}
void itislower(char num2){
    if (num2>=97 && num2<=122)
    {
        printf("%c is lower case alphabet\n",num2);
    }
    else
        printf("%c is not lower case alphabet\n",num2);
    
}
void itisupper(char num2){
    if ( num2>=65 && num2<=90 )
    {
        printf("%c is Upper case alphabet\n",num2);
    }
    else
        printf("%c is not Upper case alphabet\n",num2);
    
}
void itis_specialchar(char num3){
    if ((num3>=32 && num3<=47) || (num3>=58 && num3<=64) || (num3>=91 && num3<=96) || (num3>=123 && num3<=126))//to check special chracters dealing in ASVII
    {
        printf("%c is special alphabet\n",num3);
    }
    else
        printf("%c is not special alphabet\n",num3);
    
}
void convertlower(char string[]){
    char convert;
    for (int i = 0; string[i] != '\0'; i++)
{
    if (string[i]>=65 && string[i]<=90)
    {
        string[i]+=32;
    }
    else 
        string[i]=string[i];
    
}
puts("Lower case: ");
puts(string);

}
void convertupper(char string[]){
    char convert;
    for (int i = 0; string[i] != '\0'; i++)
{
    if (string[i]>=97 && string[i]<=122)
    {
        string[i]-=32;
    }
    else 
        string[i]=string[i];
    
}
puts("Upper case:");
puts(string);
}
int strlen2(char string[]){
    int count=0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}