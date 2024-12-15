// 1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points 
// to the third element where ptr is a pointer pointing to the first element of the 
// array.


// #include<stdio.h>

// int main(){
//     int arr[] = {0,1,2,3,4,5,6,7,8,9};

//     int* ptr = &arr[0];

//     printf("The value of ptr+2 is %d",*(ptr+2));

//     return 0;
// }



// 2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i) True.
// (ii) False.
// (iii) Depends.


// #include<stdio.h>

// int main(){
//     int S[3] = {6,7,8};

//     printf("The value is %d",*(S+2));


//     return 0;
// }

//=>It's false it will give the garbage value.




// 3. Write a program to create an array of 10 integers and store multiplication table of 
//    5 in it.
// 4. Repeat problem 3 for a general input provided by the user using scanf.

// #include<stdio.h>

// void table(int);

// void table(int x){
//     int a = 1;
//     int arr[10];
//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = x*a;
//         a++;
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n",arr[i]);
//     }
    
    
// }

// int main(){
//     int n;

//     printf("Enter a number:");
//     scanf("%d",&n);

//     table(n);


//     return 0;
// }

// 3. Write a program to create an array of 10 integers and store multiplication table of 
//    5 in it.
// 4. Repeat problem 3 for a general input provided by the user using scanf.

//=>have to make it in int main so that array can store value.


// #include<stdio.h>



// int main(){
//     int arr[10];
//     int n;

//     printf("Enter a number:");
//     scanf("%d",&n);

//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = n * (i+1);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d * %d = %d\n",n,(i+1),arr[i]);
//     }
    
    


//     return 0;
// }



// 5. Write a program containing a function which reverses the array passed to it.

// #include<stdio.h>

// int main(){
//     int n,start,end,temp;

//     printf("Enter the number of element you want: ");
//     scanf("%d",&n);
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the %d element: ",i+1);
//         scanf("%d",&arr[i]);
//     }

//     printf("You'r array: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
    

//     start=0;
//     end=n-1;

//     while (start<end)
//     {
//         temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }

//     printf("Reversed array is: ");
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",arr[i]);
//     }
    
    
    
    

//     return 0;
// }



// 6. Write a program containing functions which counts the number of positive integers in an array.

// #include<stdio.h>

// void count(int [],int);

// void count(int arr[],int size){
//     int positive=0,zero=0,negative=0 ;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < 0)
//         {
//             negative++;
//         }
//         else if (arr[i] == 0)
//         {
//             zero++;
//         }
//         else if (arr[i] > 0)
//         {
//             positive++;
//         }
        
        

//     }
    
//     printf("The number of zero are: %d\n",zero);
//     printf("The number of positive number are: %d\n",positive);
//     printf("The number of negative number are: %d\n",negative);
    
    
    
// }
// int main(){

//     int n;

//     printf("Enter the number of elements you want: ");
//     scanf("%d",&n);
//     int arr[n];
    

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value of %d number: ",i+1);
//         scanf("%d",&arr[i]);
//     }
    
//     count(arr,n);
    

//     return 0;
// }


// 7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.

// #include<stdio.h>

// int main(){
//     int arr[10][3];

//     for (int i = 0; i < 3; i++)
//     {
//         if (i==0)
//         {
//             for (int j = 0; j < 10; j++)
//             {
//                 arr[j][i] = 2*(j+1);
//             }
//         }
//         if (i==1)
//         {
//             for (int j = 0; j < 10; j++)
//             {
//                 arr[j][i] = 7*(j+1);
//             }
//         }
//         if (i==2)
//         {
//             for (int j = 0; j < 10; j++)
//             {
//                 arr[j][i] = 9*(j+1);
//             }
//         }
        
        
//     }
    
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
            
//             printf("%4d ",arr[i][j]); // By te help of %4d we can make sure that ever element take 4 space and should be right alined.

//         }
//         printf("\n");
//     }
    



//     return 0;
// }


// 8. Repeat problem 7 for a custom input given by the user.

// #include <stdio.h>

// int main()
// {
//     int n;

//     printf("Enter the number of table you want: ");
//     scanf("%d", &n);
//     int table[n];
//     int arr[10][n];

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d table of ?:\n", i + 1);
//         scanf("%d", &table[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < 10; j++)
//         {
//             arr[j][i] = table[i] * (j + 1);
//         }
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {

//             printf("%4d ", arr[i][j]); // By te help of %4d we can make sure that ever element take 4 space and should be right alined.
//         }
//         printf("\n");
//     }

//     return 0;
// }


// 9. Create a three–dimensional array and print the address of its elements in increasing order.


#include<stdio.h>

int main(){
    int arr[3][3][3] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%u\n",&arr[i][j][k]);
            }
            
        }
        
    }
    

    return 0;
}