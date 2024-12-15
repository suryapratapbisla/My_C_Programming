#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){

    struct employee e1;

    e1.code = 3333;

    struct employee *ptr;

    ptr = &e1;

    // printf("%d", (*ptr).code);


    // Arror pointer
    printf("%d", ptr->code); // This is same as (*ptr).code.
    
    return 0;
}