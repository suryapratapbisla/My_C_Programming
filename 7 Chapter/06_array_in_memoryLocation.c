#include<stdio.h>

int main(){
    int marks[] = {33,55,66,27};

    for (int i = 0; i < 4; i++)
    {
        printf("The address of %d is %u\n",i,&marks[i]); 
        // In memory every element of array is storged after 4 bytes or we can say every element contains 4 btyes.
    }
    

    return 0;
}