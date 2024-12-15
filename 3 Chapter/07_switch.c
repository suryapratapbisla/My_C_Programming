#include<stdio.h>

int main(){
    int a;

    printf("Enter the value of a:");
    scanf("%d",&a);

    switch(a){
        case 4: 
        printf("Your value is four.\n");
        break;
        case 1: 
        printf("Your value is one.\n");
        break;
        case 2: 
        printf("Your value is two.\n");
        break;
        case 3: 
        printf("Your value is three.\n");
        break;
        default:
        printf("Please, enter the value form 1 to 4.");
        break;
    }
    return 0;

    // You can use char also if you want the constant as alphabet. 
    
}
