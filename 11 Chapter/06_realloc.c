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
    printf("%d\n",ptr[n-1]); 

    // ptr = realloc(ptr, 3*sizeof(int));
    ptr = (int*)realloc(ptr, 3*sizeof(int)); // this is same as 'realloc(ptr, 3*sizeof(int))'

    printf("Enter the new memory allocation: ");
    scanf("%d",&n);

    ptr[n-1] = 23;
    printf("%d\n",ptr[n-1]); 

    free(ptr); 
    
    return 0;
}