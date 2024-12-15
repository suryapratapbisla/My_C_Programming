#include<stdio.h>

int main(){
    int marks[5];
    printf("Enter the marks of 5 person:\n");

    // scanf("%d",&marks[0]);
    // scanf("%d",&marks[1]);
    // scanf("%d",&marks[2]);
    // scanf("%d",&marks[3]);
    // scanf("%d",&marks[4]);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }
    


    // printf("The marks are %d\n",marks[0]);
    // printf("The marks are %d\n",marks[1]);
    // printf("The marks are %d\n",marks[2]);
    // printf("The marks are %d\n",marks[3]);
    // printf("The marks are %d\n",marks[4]);

    for (int i = 0; i < 5; i++)
    {
        printf("The marks are %d\n",marks[i]);
    }
    


    return 0;
}