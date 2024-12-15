#include<stdio.h>

int sum(int * , int *);

int sum(int* x, int* y){
    *x = 6;
    return *x+*y;
}
int main(){
    int a = 1;
    int b = 6;


    printf("The sum of 1 and 6 is %d\n",sum(&a,&b));

    printf("The value of a is %d\n",a);

    //=>In this case we are able to change the value of a because we have send the address of the variable and changed the value form where it is stored.

    return 0;
}