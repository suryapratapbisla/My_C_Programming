#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    
    struct employee Facebook[100];

    Facebook[0].code = 3456;
    Facebook[1].salary = 230000;

    struct employee surya = { 1111, 23000 , "Radha"};

    printf("%d %f %s",surya.code,surya.salary,surya.name);
    


    return 0;
}