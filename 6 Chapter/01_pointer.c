#include <stdio.h>

int main()
{

    int i = 11;
    int *j = &i;
    int **m = &j;
    int k = 23;

    printf("The address of i is: %u\n", &i);
    printf("The address of i is: %u\n", j);
    printf("The address of k is: %u\n", &k);
    printf("The address of m is: %u\n", m);

    printf("The value of i is %d", *(j));

    return 0;
}