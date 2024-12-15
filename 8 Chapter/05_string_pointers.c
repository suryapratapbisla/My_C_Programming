#include<stdio.h>

int main(){
    // char vs[20] = "hello Radha";
    // printf("%s",vs); 
    // vs[20] = {Radha Radha};
    // printf("%s",vs); 
    
    //=>If we assigned a value in normal string form we can not reassigne the value of it.
    
    // => But if we assigne string with the help of pointer we can change it later.

    char *ptr = "Radha";

    printf("%s\n", ptr);
    printf("%d\n", ptr);

    ptr = "Radha Radha";

    printf("%s\n", ptr);
    printf("%d\n", ptr);

    return 0;
}