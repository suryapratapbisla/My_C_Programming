#include<stdio.h>

int sum(int,int); // Function prototype


//Function defination (This can be given at the end of 'int main()')
int sum(int x,int y){
    printf("%d\n",x+y);
    return x+y;
}

int main(){

    //The void keyword indicates that the function does not return any value. 

    int a = 5, b = 6;
    sum(a,b); //Function call

    sum(2,5); //Function call

    int c = sum(a,8); //Function call
    
    
    return 0;
}