#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n;
    int* ptr;

    printf("Enter the number of allocation: ");
    scanf("%d",&n);
    
    ptr = (int*)calloc( n , sizeof(int)); // We want n number of memory of size int.

    if (ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 0;
    }
    

    ptr[n-1] = 11;
    printf("%d",ptr[n-1]);
    return 0;
}