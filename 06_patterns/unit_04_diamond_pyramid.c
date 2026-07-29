#include <stdio.h>
int main(){ int n; printf("Enter any number:"); scanf("%d",&n); for (int i=0;i<n;i++){ for (int j=i;j<n+1;j++) printf(" "); for (int k=0;k<i+1;k++) printf("*"); for (int m=i;m>0;m--) printf("*"); printf("\n"); } return 0; }
