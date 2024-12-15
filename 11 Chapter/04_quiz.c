// Quick Quiz: Write a program to create an array of size n using calloc where n is an 
//             integer entered by the user.

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n;
    int* ptr;

    printf("Enter the number of allocation: ");
    scanf("%d",&n);
    
    ptr = (int*)calloc( n , sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 0;
    }
    

    ptr[n-1] = 11;
    printf("%d",ptr[n-1]); 

    free(ptr); // It is mandatory sometime you have to work with small memory therefor its a good practies.
    
    return 0;
}