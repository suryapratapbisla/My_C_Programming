#include <stdio.h>

int main()
{

    int i = 11;
    int *j = &i;
    int **k = &j;

    printf("The value of i is: %d\n", i);
    printf("The value of i is: %d\n", *j);
    printf("The value of i is: %d\n", **k);
    printf("The value of i is: %d\n", **(&j)); //=> **(&j) => *(j) => *(&i) => i

    //=>  * cuts the & just like me cut number.

    return 0;
}
