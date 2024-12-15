#include<stdio.h>

void swap(int* , int* );

void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){

    int a = 5, b = 6;

    printf("The value of A is %d and the value of b is %d\n", a ,b );
    swap(&a,&b);

    printf("The value of A is %d and the value of b is %d\n", a ,b );
    
    return 0;
}