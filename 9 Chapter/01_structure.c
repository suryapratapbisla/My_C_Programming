#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main()
{

    struct employee e1,e2,e3;

    // e1.name = "Radha";
    // we can not assign value of char in structure bby "=" there for we will use "strcpy()".
    strcpy(e1.name,"Radha");
    e1.code = 1109;
    e1.salary = 35000;

    printf("%s %d %f",e1.name,e1.code,e1.salary);

    struct employee surya = { 1111, 23000 , "Radha"};


    printf("%d %f %s",surya.code,surya.salary,surya.name);



    

    return 0;
}