#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n;
    int* ptr;

    printf("Enter the number of allocation: ");
    scanf("%d",&n);

    // int aar[n] = 34; can't do this.

    ptr = (int*)malloc( n * sizeof(int)); // We want n * size of int storage in memory

    if (ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 0;
    }
    

    ptr[n-1] = 11;
    printf("%d",ptr[n-1]);
    return 0;
}