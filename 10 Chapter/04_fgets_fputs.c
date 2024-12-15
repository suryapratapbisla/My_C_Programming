#include<stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("Radha.txt","r");

    // char ch = fgetc(ptr);

    // printf("%c",ch);

    ptr = fopen("Captain.txt","w");
    
    fputs("Viajylaxmi",ptr);

    fclose(ptr);

    return 0;
}