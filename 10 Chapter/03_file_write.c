#include<stdio.h>

int main()
{
    FILE* ptr;
    // ptr = fopen("Captain.txt","w"); // When we write with 'w' it clears the file and then writes into it.
    ptr = fopen("Captain.txt","a"); // And when we open it with 'a' it writes at the end of file. 

    int num = 11;

    fprintf(ptr,"%d",num);

    fclose(ptr);

    return 0;
}