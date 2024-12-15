#include <stdio.h>

int main()
{

    char i = 'a';
    char *j = &i;

    float k = 3.56;
    float *l = &k;

    printf("The address of i is: %u\n", &i);
    printf("The address of i is: %u\n", j);
    printf("The address of k is: %u\n", &k);
    printf("The address of k is: %u\n", l);

    printf("The value of i is %d", *(j));
    printf("The value of k is %d", *(l));

    return 0;
}