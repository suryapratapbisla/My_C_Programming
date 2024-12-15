#include<stdio.h>

int factorial(int);

int factorial(int n){

    if (n==1||n==0)
    {
        return 1;
    }
    

    return n * factorial(n-1);
}

int main(){
    
    int a;

    printf("Enter the number: ");
    scanf("%d",&a);
    
    printf("the factorial of %d id %d",a,factorial(a));

    return 0;
}