//=>1.Write a program using function to find average of three numbers.

// #include <stdio.h>

// float average(float, float, float);

// float average(float x, float y, float z)
// {
//     printf("The avarage of %.1f , %.1f , %.1f is: %.2f", x, y, z, (x + y + z) / 3);
// }

// int main()
// {

//     float x, y, z;
//     float result;

//     printf("The the first number: ");
//     result = scanf("%f", &x);
//     if (result != 1)
//     {
//         printf("Enter the corret number.");
//         return 0;
//     }

//     printf("The the second number: ");
//     result = scanf("%f", &y);
//     if (result != 1)
//     {
//         printf("Enter the corret number.");
//         return 0;
//     }
//     printf("The the third number: ");
//     result = scanf("%f", &z);
//     if (result != 1)
//     {
//         printf("Enter the corret number.");
//         return 0;
//     }

//     average(x, y, z);

//     return 0;
// }

//=>2. Write a function to convert Celsius temperature into Fahrenheit.

// #include <stdio.h>

// float convert(float);

// float convert(float x)
// {
//     float fahrenheit = (x * (9.0 / 5.0)) + 35;
//     printf("Temperature in fahrenhiet is: %.2f", fahrenheit);
//     return fahrenheit;
// }

// int main()
// {

//     float celsius;

//     printf("Enter the temperatue in celsius:");
//     scanf("%f", &celsius);

//     convert(celsius);

//     return 0;
// }

//=>3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.

// #include<stdio.h>

// float force(float);

// float force(float x){
//     float c = x*9.8;
//     printf("THe force acting on body is: %.2f",c);
//     return c;
// }

// int main(){

//     float mass;

//     printf("Enter the mass of boay in kg:");
//     scanf("%f",&mass);

//     force(mass);

//     return 0;
// }

//=> 4. Write a program using recursion to calculate nth element of Fibonacci series.

// #include<stdio.h>

// int fibo(int);

// int fibo(int n){ // The position starts from 0.

//     if(n<=1){
//         return n;
//     }

//     return fibo(n-1) + fibo(n-2);
// }

// int main(){

//     int a;

//     printf("Ener the position you want: ");
//     scanf("%d",&a);

//     if(a<0){
//         printf("Position should be positive.");
//     }else
//     {
//         printf("At the position of %d the value is %d",a,fibo(a));
//     }

//     return 0;
// }

//=> 5. What will the following line produce in a C program:
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);

// #include<stdio.h>

// int main(){
//     int a = 4;
//     printf("%d %d %d \n", a, ++a, a++);
//     // 6 6 4 The evalution order will be from right to left .
//     // 4 5 5 is also correct it depends on the compiler if the compiler read form left to right its correct.
//     return 0;
// }

//=> 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.

// #include<stdio.h>

// int sum(int);

// int sum(int n){

//     if (n==0)
//     {
//         return 0;
//     }

//     return n + sum(n-1);
// }

// int main(){

//     int a;

//     printf("Enter the number: ");
//     scanf("%d",&a);

//     if(a<0){
//         printf("Pleease enter a positive number.");
//     }else
//     {
//         printf("The sum of number till %d is %d",a,sum(a));
//     }

//     return 0;
// }

//=> 7. Write a program using function to print the following pattern (first n lines)
// *
// * * *
// * * * * *

#include <stdio.h>

int print();

int print(int x)
{

    for (int i = 1; i <= x; i++)
    {

        for (int a = 1; a <= i; a++)
        {

            printf("*");
        }

        printf("\n");
    }
}

int main()
{

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Enter a positive number.");
    }
    else
    {
        print(num);
    }

    return 0;
}