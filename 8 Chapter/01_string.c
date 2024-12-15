#include<stdio.h>

int main(){
    // char st[] = {'C','a','t','a','i','n','\0'};
    char st[] = "Captain";

    // printf("%c",st[0]);
    
    //=> Create a string using double quotes and print its content using a loop.
    for (int i = 0; i < 7; i++)
    {
        printf("The value of c is: %c\n",st[i]);
    }
    

    return 0;
}