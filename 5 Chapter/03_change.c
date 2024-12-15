#include<stdio.h>

int change(int);

int change(int a){
    a = 11;
    
    return a;
}

int main(){
    
    int b = 25;

    change(b); // This wil not change the value of be but make a copy and will assigne it to 'change()'
    printf("%d\n",b);

    int c = change(b);

    printf("%d\n",c);

    return 0;
}