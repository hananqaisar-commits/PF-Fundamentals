#include<stdio.h>

void strcopy(char *string1, char *string2){
 int i=0;
while(string2[i]!='\0'){
    string1[i]=string2[i];
    i++;
}
string1[i]='\0';

}
void stringcat(char *string2,char *string3){

int i=0;
int j=0;

while(string2[i]!='\0'){
    i++;
}

while(string3[j]!='\0'){
    string2[i]=string3[j];
    i++;
    j++;
}
string2[i]='\0';
}
int main(){

char string1[100];
char string2[100];
char string3[100];

printf("Enter string 1:");
scanf("%s",string1);

printf("Enter string 2:");
scanf("%s",string2);

printf("Enter string 3:");
scanf("%s",string3);



strcopy( string1, string2);
printf("%s\n",string1);

stringcat(string2,string3);
puts(string2);


return 0;

}
