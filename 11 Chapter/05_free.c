// Quick Quiz: Write a program to demonstrate the usage of free() with malloc().

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n;
    int* ptr;

    printf("Enter the number of allocation: ");
    scanf("%d",&n);
    
    ptr = (int*)malloc( n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 0;
    }
    

    ptr[n-1] = 11;
    free(ptr); // It is mandatory sometime you have to work with small memory therefor its a good practies.
    
    printf("%d",ptr[n-1]); 
    // it still give the value as its working as dangling pointer. 
    // The program might still allow access to this memory because
    // it hasn't been reallocated for another use yet. However, this is not guaranteed behavior 
    // and should not be relied upon.
    ptr = NULL; //If you want to ensure the memory is completly free.
    return 0;
}