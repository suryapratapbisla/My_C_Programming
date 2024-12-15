#include<stdio.h>

int main(){
    char sv[15];
    
    printf("Enter your first name: ");
    // scanf("%s",&sv); // We can wirte in both manner as there is no need of '&' as srting act as a pointer.
    scanf("%14s",sv);

    printf("%s",sv);
    return 0;
}