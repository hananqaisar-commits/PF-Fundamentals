#include<stdio.h>

void tower(int n, char f, char h, char t); // prototype

int main() {
    char f='1', h='2', t='3';// f=from, h=help, t=to
    int n;

    printf("Enter number of plates on tower 1: ");
    scanf("%d", &n);

    tower(n, f, h, t);

    return 0;
}

void tower(int n, char f, char h, char t) {
    if (n == 1) {
        printf("Move disc 1 from %c to %c\n", f, t);
        return;
    }

    tower(n-1, f, t, h);          // Move n-1 discs from source to helper
    printf("Move disc %d from %c to %c\n", n, f, t); // Move nth disc
    tower(n-1, h, f, t);          // Move n-1 discs from helper to target
}
