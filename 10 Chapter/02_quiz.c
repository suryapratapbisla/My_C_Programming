// Quick Quiz: Modify the program above to check whether the file exists or not before 
// opening the file. 

#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Radh.txt","r");

    if (ptr == NULL)
    {
        printf("The file does not exist !!");
        return 0;
    }
    
    int num;
    fscanf(ptr,"%d",&num); //This used to read the input from file
    printf("The value of num is: %d\n",num);


    fscanf(ptr,"%d",&num); 
    // Once file is open  it starts form where it is stops. (11 ko read kerne ke baad vo uske age se hi shuru hogi)
    printf("The value of num is: %d\n",num);


    fclose(ptr); //Its a good practies to close the file after use.
    return 0;
}