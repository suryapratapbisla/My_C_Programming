#include <stdio.h>

// Area with Hard code value.

// int main(){
//     int l, b, product;
//     l = 5;
//     b = 5;
//     product  = l*b;

//     printf("Length: %d \n", l);
//     printf("Breadth: %d \n", b);
//     printf("Area of Rectangle is : %d",product);
//     return 0;
// }

// In which the user put the value.

// int main(){
//     int l;
//     int b;
//     int product;

//     printf("Enter the length:");
//     scanf("%d", &l);

//     printf("Enter the breadth:");
//     scanf(" %d", &b);

//     product = l*b;

//     printf("Area of rectangle is:%d ",product);
//     return 0;
// }

#define M_PI 3.14159265358979323846 // This is how you cann define a value.

// => First calculate the area f circle then mae it the volume f cylinder.

// int main(){
//     float radius, height, area, volume;

//     printf("Enter the value of Radius: ");
//     scanf("%f", &radius);

//     printf("Enter the height of cylinder:");
//     scanf("%f",&height);

//     volume = M_PI * radius*radius*height;
//     printf("Volume of circle is: %f", volume);

//     return 0;
// }

// => celcius to fahrenheit

// int main(){
//     float  celsius,fahrenheit;

//     printf("Enter Temprature in Celsius:");
//     scanf("%f",&celsius);

//     fahrenheit = (celsius*(9.0/5.0)+32);

//     printf("Vaule in fahrenheit %f", fahrenheit);

//     return 0;

// }

//=> to find simple intrest

int main()
{
    float principal, year, rate, simple_intrest;

    printf("Enter the invested amount: ");
    scanf("%f", &principal);

    printf("Enter the time period in years: ");
    scanf("%f", &year);

    printf("Rate of intrest annual:");
    scanf("%f", &rate);

    simple_intrest = principal * year * rate / 100;
    printf("Simple Intrest is : %f", simple_intrest);
}


