#include<stdio.h>

int main(){
    int a, b, c;
    a = 2;
    b = 3;
    c = 7;

    // In C there is no BODMAS there first */% are concidered first then -+ and at last =.

    printf("Solve %d", a+b*c);
    return 0;
}