#include<stdio.h>

int main(){
    
    // condition ? expression-if-true : expression-if-false
    int a ;
    printf("Enter your age:\n");
    scanf("%d",a);
    
    a==25? printf("Your age is 25."): printf("Your age is not 25.");
    return 0;
}