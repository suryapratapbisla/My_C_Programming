#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
}emp;


int main(){
    
    // typedef char surya;

    // surya a = 'v';   // Now surya will work as int.

    // printf("%c",a);


    // typedef struct employee emp;


    emp e1; // it is same as 'struct employee e1;'

    emp* ptr = &e1;

    strcpy(e1.name,"Radha");
    e1.code = 1109;
    e1.salary = 35000;

    printf("%s %d %f\n",e1.name,e1.code,e1.salary);

    printf("%s %d %f\n",ptr->name,ptr->code,ptr->salary);




    return 0;
}