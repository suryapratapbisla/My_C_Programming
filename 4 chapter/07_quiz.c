// Write a program to print first ‘n’ natural number using do-while loop.

#include<stdio.h>

int main(){
    int n=4;
    

    int i=1;

    do{
        if (n==0)
        {
            printf("Enter a natural number.");
            break;
        }
        
        printf("%d\n",i);
        i++;
    }while (i<=n);
    
    return 0;
}