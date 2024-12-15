#include<stdio.h>



int main(){
    int marks[] = {22,76,98,54};

    // int* ptr = &marks[0]; 
    int* ptr = marks; //They both are same but it is only for first element.

    for (int i = 0; i < 4; i++)
    {
        // printf("The marks of student %d is %d\n",i,marks[i]);
        printf("The marks of student %d is %d\n",i,*ptr);
        ptr++; //By adding 1 in ptr we will amke it point to the next block to get values.
    }
    
    
    return 0;
}