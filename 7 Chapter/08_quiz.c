//=>Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.

// #include <stdio.h>

// int main()
// {

//     int arr[3][2];

//     for (int k = 0; k < 3; k++)
//     {
//         for (int l = 0; l < 2; l++)
//         {
//             printf("Enter the value of [%d,%d]:",k,l);
//             scanf("%d",&arr[k][l]);
//         }
        
//     }
    

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
    
                     

//     return 0;
// }


#include<stdio.h>

// int print_arr(int [], int);

// int print_arr(int arr[] , int n){
//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("Enter the number:");
//     //     scanf("%d",&arr[i]);
//     // }
//     for (int j = 0; j < n; j++)
//     {
//         printf("The value is: %d\n",arr[j]);
//     }
    
// }

int makeArr(int [], int);
int makeArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number[%d]:",i);
        scanf("%d",&arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        printf("The values are: %d\n",arr[j]);
    }
    
    
}


int main(){
    
    int n;
    printf("Enter how many value you wanna add:");
    scanf("%d",&n);

    int myArray[n];
    // int size = sizeof(myArray) / sizeof(myArray[0]);

    // print_arr(myArray,size);

    makeArr(myArray,n);

    return 0;
}