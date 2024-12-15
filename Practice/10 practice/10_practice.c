// 1. Write a program to read three integers from a file.

// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     ptr = fopen("test1.txt", "r");

//     if (ptr == NULL)
//     {
//         printf("The file does not exist.");
//     }

//     int num;

//     for (int i = 0; i < 3; i++)
//     {

//         fscanf(ptr, "%d", &num);

//         if (num == EOF)
//         {
//             break;
//         }

//         printf("%d\n", num);
//     }

//     return 0;
// }


// 2. Write a program to generate multiplication table of a given number in text 
//    format. Make sure that the file is readable and well formatted.


// #include<stdio.h>

// int main()
// {
//     int num;
//     FILE* ptr;

//     printf("Enter a number: ");
//     scanf("%d",&num);
    
//     ptr = fopen("test2.txt","w");

//     for (int i = 1; i <= 10; i++)
//     {
//         fprintf(ptr,"%d * %d = %d\n",num,i,(num*i));
//     }
    
//     fclose(ptr);
    
//     return 0;
// }


// 3. Write a program to read a text file character by character and write its content 
//    twice in separate file. 


// #include<stdio.h>

// int main()
// {
//     FILE* ptr1;
//     FILE* ptr2;

//     char ch;
//     ptr2 = fopen("test3_2.txt","a");

//     for (int i = 0; i < 2; i++)
//     {
//         ptr1 = fopen("test3_1.txt","r");

//         while ((ch = fgetc(ptr1)) != EOF)
//         {
//             fputc(ch,ptr2);
//         }
//         fprintf(ptr2,"\n");

//         fclose(ptr1);
//     }
    
//     fclose(ptr2);
//     return 0;
// }


// 4.  Take name and salary of two employees as input from the user and write them to 
//     a text file in the following format: 
//         i. Name1, 3300 
//         ii. Name2, 7700

// #include<stdio.h>

// typedef struct employee
// {
//     char name[20];
//     int salary;
// } emp;


// int main()
// {
//     FILE* ptr;
//     emp e[2];

//     for (int i = 0; i < 2; i++)
//     {
//         printf("Enter the name of %d employee: ",i+1);
//         gets(e[i].name);
//         printf("Enter the salary of %d employee: ",i+1);
//         scanf("%d",&e[i].salary);
//         while (getchar() != '\n');
//     }

//     ptr = fopen("test4.txt","w");

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             fprintf(ptr,"i");
//         }
//         fprintf(ptr,". ");

//         fprintf(ptr,"%s,%d\n",e[i].name,e[i].salary);
        
//     }
    
    
//     fclose(ptr);

    
//     return 0;
// }


// 5. Write a program to modify a file containing an integer to double its value.

#include<stdio.h>

int main()
{
    FILE* ptr;
    int num;
    ptr = fopen("test5.txt","r");

    fscanf(ptr,"%d",&num);

    fclose(ptr);
    

    ptr = fopen("test5.txt","w");

    fprintf(ptr,"%d",num*num);

    fclose(ptr);
    
    return 0;
}