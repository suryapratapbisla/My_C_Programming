// Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n = 5;
    float* ptr;


    ptr = (float*)malloc( n * sizeof(float));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 0;
    }

    for (int i = 0; i < 5; i++)
    {
    printf("Enter the value of %d: ",i+1);
    scanf("%f",&ptr[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n",ptr[i]);
    }
    
    return 0;
}