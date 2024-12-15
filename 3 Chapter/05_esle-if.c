#include<stdio.h>

int main(){
    int age;

    printf("Enter yur age:\n");
    scanf("%d",&age);

    if (age>=60)
    {
        printf("You are now sinor citizen.");
    } else if (age>=35)
    {
        printf("You are now elder.");
    } else if (age>=20)
    {
        printf("You are young right now.");
    } else {
        printf("Go and study kid.");
    }
    
    
    
    return 0;
}