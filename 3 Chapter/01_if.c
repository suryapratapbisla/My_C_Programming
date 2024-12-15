#include<stdio.h>

int main(){
    int a ;
    printf("Enter your age:\n");
    scanf("%d",&a);

    if (a>=18)
    {
        printf("You are allowed to drive.");
    }
    if(a<18){
        printf("You can't drive.");
    }
    
    return 0;
}