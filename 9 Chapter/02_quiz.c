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

    // struct employee e[3];

    // for (int i = 1; i <= 3; i++)
    // {
    //     printf("Enter the name of employee %d: \n",i);
    //     scanf("%s",&e[i].name);
    //     printf("Enter the code of employee %d: \n",i);
    //     scanf("%d",&e[i].code);
    //     printf("Enter the salary of employee %d: \n",i);
    //     scanf("%f",&e[i].salary);

    //     printf("%s %d %f\n",e[i].name,e[i].code,e[i].salary);

    // }
    

    printf("Enter the name of employee: \n");
    scanf("%s",&e1.name);
    printf("Enter the code of employee: \n");
    scanf("%d",&e1.code);
    printf("Enter the salary of employee: \n");
    scanf("%f",&e1.salary);

    printf("%s %d %f\n",e1.name,e1.code,e1.salary);
    

    printf("Enter the name of employee: \n");
    scanf("%s",&e2.name);
    printf("Enter the code of employee: \n");
    scanf("%d",&e2.code);
    printf("Enter the salary of employee: \n");
    scanf("%f",&e2.salary);
   
    printf("%s %d %f\n",e2.name,e2.code,e2.salary);

    printf("Enter the name of employee: \n");
    scanf("%s",&e3.name);
    printf("Enter the code of employee: \n");
    scanf("%d",&e3.code);
    printf("Enter the salary of employee: \n");
    scanf("%f",&e3.salary);
   
    printf("%s %d %f\n",e3.name,e3.code,e3.salary);

    return 0;
}