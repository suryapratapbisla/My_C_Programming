#include<stdio.h>

int main(){
    //POINTER ARITHEMETIC IN TERMS OF INTEGER.
    // int a = 11;
    // int* ptr = &a;

    // printf("The address of a is: %u\n",&a);
    // printf("The address of a is: %u\n",ptr);
    // ptr++; // It will increase by the number of byets as much as its one value take.In this case it will be "4 BYTES".
    // printf("the address of ptr is: %u\n",ptr);

    //POINTER ARITHEMETIC IN TERMS OF Character.
    // char a = 'V';
    // char* ptr = &a;
    // printf("The address of a is: %u\n",&a);
    // printf("The address of a is: %u\n",ptr);
    // ptr++;
    // printf("The address of ptr is: %u\n",ptr);//In this case it will increase by 1.

    //POINTER ARITHEMETIC IN TERMS OF FLOATING POINT.
    float a = 11.23;
    float* ptr = &a;
    printf("The address of a is: %u\n",&a);
    printf("The address of a is: %u\n",ptr);
    ptr++;
    printf("The address of ptr is: %u\n",ptr);//In float it will take 4 bytes.

    return 0;
}