#include<stdio.h>

int main(){
    
    /* Write a program to find grade of a student given his marks based on below:
    90 – 100 => A
    80 – 90 => B
    70 – 80 => C
    60 – 70 => D
    50 – 60 => E
    <50 => F
    */

    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);

    if (marks<=100 && marks>90)
    {
        printf("Your grade is A.");
    } else if (marks<=90 && marks>80)
    {
        printf("Your grade is B.");
    }
     else if (marks<=80 && marks>70)
    {
        printf("Your grade is C.");
    }
     else if (marks<=70 && marks>60)
    {
        printf("Your grade is D.");
    }
     else if (marks<=60 && marks>50)
    {
        printf("Your grade is E.");
    } else if(marks<50) {
        printf("Your grade is F.");
    }else{
        printf("Please,Enter the correct marks.");
    }
    
    return 0;
}