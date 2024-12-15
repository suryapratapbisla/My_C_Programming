#include<stdio.h>
#include<math.h>




int main(){
    
    float a;
    printf("Enter the side of sqaure: ");
    scanf("%f",&a);

    printf("The side of square is %.1f so area is %.2f\n", a, pow(a, 2));


    return 0;
}