#include<stdio.h>

int main(){
    int a=7;
    int b=3;
    int c= a + b;
    printf("value of a=> %d and value of b=> %d the sum is %d\n",a,b,c);
    
    
    // Modulus operator is used to get the remainder.
    printf("The remender of 7 divide by 3 is %d\n",a%b);
    return 0;

    // ^ This does not work for exponentiation in c.
    // int d = a^b;
}