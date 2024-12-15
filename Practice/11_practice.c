// 1.  Write a program to dynamically create an array of size 6 capable of storing 6 
//     integers. 
// 2. Use the array in problem 1 to store 6 integers entered by the user.

// #include<stdio.h>
// #include<stdlib.h>


// int main()
// {
//     int* ptr;
//     ptr = (int*)malloc(6*sizeof(int));

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter the %d number: ",i+1);
//         scanf("%d",&ptr[i]);
//     }
    
//     return 0;
// }


// 3. Solve problem 1 using calloc(). 

// #include<stdio.h>
// #include<stdlib.h>


// int main()
// {
//     int* ptr;
//     ptr = (int*)calloc(6,sizeof(int));

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter the %d number: ",i+1);
//         scanf("%d",&ptr[i]);
//     }
    
//     return 0;
// }


// 4.  Create an array dynamically capable of storing 5 integers. Now use realloc so 
//     that it can now store 10 integers. 

// #include<stdio.h>
// #include<stdlib.h>


// int main()
// {
//     int* ptr;
//     ptr = (int*)malloc(5*sizeof(int));

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the %d number: ",i+1);
//         scanf("%d",&ptr[i]);
//     }

//     ptr = realloc(ptr,10*sizeof(int));

//     for (int i = 5; i < 10; i++)
//     {
//         printf("Enter the %d number: ",i+1);
//         scanf("%d",&ptr[i]);
//     }

    
//     return 0;
// }

// 5.  Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to 
//     make it store 15 number (from 7 x 1 to 7 x 15).

// #include<stdio.h>
// #include<stdlib.h>


// int main()
// {
//     int* ptr;
//     ptr = (int*)calloc(10,sizeof(int));

//     for (int i = 0; i < 10; i++)
//     {
//         ptr[i] = 7*(i+1);
//     }

//     ptr = realloc(ptr,15*sizeof(int));

//     for (int i = 10; i < 15; i++)
//     {
//         ptr[i] = 7*(i+1);
//     }
//     for (int i = 0; i < 15; i++)
//     {
//         printf("%d\n",ptr[i]);
//     }

    
//     return 0;
// }


// 6. Attempt problem 4 using calloc().

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int* ptr;
    ptr = (int*)calloc(5,sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d number: ",i+1);
        scanf("%d",&ptr[i]);
    }

    ptr = realloc(ptr,10*sizeof(int));

    for (int i = 5; i < 10; i++)
    {
        printf("Enter the %d number: ",i+1);
        scanf("%d",&ptr[i]);
    }

    
    return 0;
}
