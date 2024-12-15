#include<stdio.h>

int main(){
    
    // Following operations can be performed on a pointer: 
    // 1. Addition of a number to a pointer. 
    // 2. Subtraction of a number from a pointer. 
    // 3. Subtraction of one pointer from another. 
    // 4. Comparison of two pointer variables. 
    // Try these operations on another variable by creating pointers in a separate program. Demonstrate all the four operations. 

    int test[] ={0,1,2,3,4,5};


    // 1. Addition of a number to a pointer.
    
    // int* ptr1 = &test[2];

    // printf("The value is: %u\n",ptr1);
    // printf("The value is: %d\n",ptr1+2); // There addition of 1 takes 4 bytes so if you add 4 it will have addition 16 bytes.
    
    // And In the case of test[4] and test[2] there is diffrence of 8 bytes it shows 2.
    // after adding 1 pointer will point to next memory location.

    // 2. Subtraction of a number from a pointer. 
    
    // int* ptr1 = &test[2];

    // printf("The value is: %u\n",ptr1);
    // printf("The value is: %u\n",ptr1-2); // In this case there is the same if we add 1 it will take 4 bytes therefor n*4 bytes will be taken.
        

    // 3. Subtraction of one pointer from another. 
    // int i = 8;
    // int j = 5;
    // int* ptr1 = &i;
    // int* ptr2 = &j;

    // printf("The value of 4 is: %u\n",ptr1);
    // printf("The value of 2 is: %u\n",ptr2);
    // printf("The value of there subtraction: %u\n",ptr1-ptr2); // There is a gap of 4 bytes it will show 1. It will show 4=>1.


    // 4. Comparison of two pointer variables. 
    int* ptr1 = &test[2];
    int* ptr2 = &test[2];

    if (ptr1==ptr2)
    {
        printf("The value of ptr1 and ptr2 is same.\n");
        printf("The value of ptr1: %u\n",ptr1);
        printf("The value of ptr2: %u\n",ptr2);
    }
    

    return 0;
}