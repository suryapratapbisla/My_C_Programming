
// Quick Quiz: Complete this show function to display the content of employee.

#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

void print_struct(struct employee []);

void print_struct(struct employee e[])
{
    printf("%d %f %s\n",e[0].code,e[0].salary,e[0].name);
    printf("%d %f %s\n",e[1].code,e[1].salary,e[1].name);
}


int main(){

    struct employee e[5];
    
    strcpy(e[0].name,"Radha");
    e[0].code = 1109;
    e[0].salary = 35000;
    strcpy(e[1].name,"surya");
    e[1].code = 1109;
    e[1].salary = 35000;
    strcpy(e[2].name,"Captain");
    e[2].code = 1109;
    e[2].salary = 35000;

    struct employee *ptr;
    ptr = &e[0];

    print_struct(ptr);
    

    return 0;
}