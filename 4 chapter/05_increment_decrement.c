#include<stdio.h>

int main(){
    int i;
    i = 0;

    i = i + 1; // 1
    printf("The value of i is: %d\n", i);

    i++; // 2
    printf("The value of i is: %d\n", i);

    i--; // 1
    printf("The value of i is: %d\n", i);

    // ++i in this it will first add then print i.
    // i++ in this it will first print then add in i.


    i+=2; // i = i+2
    printf("The value of i is: %d\n", i);

    i-=3; // i = i-3
    // And same for *=,/=,%=



    // All of the other work with binary
    // &=
    int x = 5; // 5 is 0101 in binary
    x &= 3; // 3 is 0011 in binary; x becomes 0001 in binary, which is 1 in decimal
    printf("%d", x); // Output: 1

    // |=
    int x = 5; // 5 is 0101 in binary
    x |= 3; // 3 is 0011 in binary; x becomes 0111 in binary, which is 7 in decimal
    printf("%d", x); // Output: 7

    // ^=
    int x = 5; // 5 is 0101 in binary
    x ^= 3; // 3 is 0011 in binary; x becomes 0110 in binary, which is 6 in decimal
    printf("%d", x); // Output: 6

    // <<=
    int x = 5; // 5 is 0101 in binary
    x <<= 1; // Shifts bits to the left by 1 position; x becomes 1010 in binary, which is 10 in decimal
    printf("%d", x); // Output: 10

    // >>=
    int x = 5; // 5 is 0101 in binary
    x >>= 1; // Shifts bits to the right by 1 position; x becomes 0010 in binary, which is 2 in decimal
    printf("%d", x); // Output: 2


    return 0;
}