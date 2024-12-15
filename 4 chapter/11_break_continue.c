#include<stdio.h>

int main(){
    int n = 12;

    for(int i = 0; i<=n;i++){
        if (i==6)
        {
            // break; // will get out of loop
            printf("You are the mid way %d\n",i);
            continue;
        }
        
        printf("%d\n",i);
    }
    return 0;
}