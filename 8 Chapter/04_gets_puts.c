#include <stdio.h>

int main()
{
    char sv[6] = "Radha";

    // gets(sv);  => We can not limit the input it may leed to overflow or buffer.
    
    // fgets(sv, sizeof(sv), stdin); //=>In this we can limit the input.
    puts(sv); // Prints the string and send the cursur to next line.
    printf("visu");
    return 0;
}