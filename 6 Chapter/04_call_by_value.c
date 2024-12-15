#include<stdio.h>

int sum(int , int);

int sum(int x, int y){
    x = 6;
    return x+y;
}
int main(){
    int a = 1;
    int b = 6;

    printf("The sum of 1 and 6 is %d\n",sum(a,b));

    printf("The value of a is %d\n",a);

    //=>In this we can't change the value because it is call by value so there will be copy of the value which we work on.

    return 0;
}