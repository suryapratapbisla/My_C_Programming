
//=> 1. Write a program to print the address of a variable. Use this address to get the value of the variable. 

// #include<stdio.h>

// int main(){
//     int a;
//     printf("Enter the value of a: ");
//     scanf("%d",&a);

//     printf("The value of a is: %u\n",&a);
//     printf("The value of a is: %p\n",&a);


//     return 0;
// }


//=> 2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?

// #include<stdio.h>

// int address(int * );

// int address(int  *x){
//     printf("The address of i is: %d\n",*x);
//     printf("The address at i is: %u\n",x);
// }

// int main(){
    
//     int i;
//     printf("Enter the value of i: ");
//     scanf("%d",&i);

//     printf("The value of i is: %d\n",i);
//     printf("The value at i is: %u\n",&i);

//     address(&i);

//     return 0;
// }



//=>3. Write a program to change the value of a variable to ten times of its current value.

// #include <stdio.h>

// int ten(int *);

// int ten(int *x)
// {
//     *x = 10 * (*x);
//     return *x;
// }


// int main()
// {
//     int i;
//     printf("Enter the value of i: ");
//     scanf("%d", &i);

//     ten(&i);

//     printf("Tner value of i is: %d", i);

//     return 0;
// }



//=>4. Write a function and pass the value by reference. //=>This is hackerrank question.

// #include<stdio.h>

// int hacker(int*,int*);

// int hacker(int* x,int* y){
//     int temp;
//     temp = *x;
//     *x = *x + *y;
//     if (temp>*y)
//     {
//         *y = temp - *y;
//     }else
//     {
//         *y = *y - temp;
//     }
    
    
    
// }

// int main(){
    
//     int a,b;

//     printf("Enter the value of a: ");
//     scanf("%d",&a);
//     printf("Enter the value of b: ");
//     scanf("%d",&b);

//     hacker(&a,&b);

//     printf("The value of a is: %d\n",a);
//     printf("The value of b is: %d\n",b);



//     return 0;
// }




//=>5. Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

float* sum(float*, float*);

float* sum(float* x, float* y)
{
    float c = *x+*y;
    float* ptr = &c;
    printf("The sum is: %.2f\n",c);
    return ptr;
}

float* average(float *, float *);

float* average(float *x, float *y)
{
    float c = (*x + *y) / 2;
    float* ptr = &c;
    printf("The average is: %.2f\n",c);
    return ptr;
}

int main()
{
    float a, b;
    int x;

    float* ptr;

    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);





    printf("Enter 1 for sum and 2 for average:");
    scanf("%d", &x);

    if (x == 1 || x == 2)
    {
        switch (x)
        {
        case 1:

            
            ptr = sum(&a, &b);
            printf("The address of sum is: %u\n",ptr);

            break;
        case 2:

            ptr = average(&a ,&b);
            printf("The address of average is: %u",ptr);
            break;
        }
    }
    else
    {
        printf("Enter the correct value.");
    }

    

    return 0;
}



//=> 6. Write a program to print the value of a variable i by using “pointer to pointer” type of variable.

// #include<stdio.h>

// int main(){
//     int i = 7;
//     int* j = &i;
//     int** k = &j;

//     printf("The value of i is: %d\n",*j);
//     printf("The value of i is: %d\n",*(&i));
//     printf("The value of i is: %d\n",**k);
//     return 0;
// }


//=>7.Try problem 3 using call by value and verify that it does not change the value of the said variable. 
//=>3. Write a program to change the value of a variable to ten times of its current value.


// #include<stdio.h>

// int ten(int);
// int ten(int x){
//     x = x*10;
//     return x;
// }

// int main(){
//     int a;
//     printf("Enter the value of a:");
//     scanf("%d",&a);
//     ten(a);

//     printf("The value of a : %d",a);//=>8 This showes that call by value does not change the original valueit just playes with copyed value.
//     return 0;
// }