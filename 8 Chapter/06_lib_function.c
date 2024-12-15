#include<stdio.h>
#include<string.h>

int main(){
    char rk[] = "Radha";
    char vs[20] = " Krishn";
    // strlen(vs) => This wil count the number of element in string excluding the null elelment

    // int length = strlen(st);
    // printf("%d",strlen(rk));



    // strcpy(vs,rk); // It will Copy Sting form the second one to the first one.

    // printf("%s",vs);



    // strcat(rk,vs); This Will merge the two strings. It will merge the second string to first one and the second will stay unchanged.
    // strcat(rk,vs);

    // printf("%s\n",rk);
    // printf("%s\n",vs);
    // printf("%s",strcat(rk,vs));  => This will print only the first one after merging. 
    


    // strcmp("Radha","Krishn") => This will compare two string on the basis of ASCII values. If first one comes first it will give +ve value and if second onr comes first it will give -ve value.
    // If the string are equal it will give 0.

    // int visu = strcmp("Radha","Krishn"); 
    int visu = strcmp("Radha","Radha");
    printf("%d",visu);
    return 0;
}