#include<stdio.h>

int main(){
    int a = 0;
    int b = 1;

    printf("The value of a and b is %d\n",a&&b);// will give value true(1) if both are true(1).
    printf("The value of a and b is %d\n",a||b);// will give value true(1) if one of them is true(1).
    printf("The value of a and b is %d\n",!a);// will give opposite value of given value.
    printf("The value of a and b is %d\n",!b);// will give opposite value of given value.

    if (a&&b)
    {
        printf("This will print.\n");
    }

    if (a)
    {
        if (b)
        {
            printf("Then this will print");
        }
        
    }
    
    

    return 0;
}