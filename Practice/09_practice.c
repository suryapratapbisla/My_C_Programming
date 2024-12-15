// 1. Create a two-dimensional vector using structures in C.

// #include<stdio.h>

// struct vector
// {
//     int i;
//     int j;
// };


// int main()
// {
//     struct vector v1;

//     printf("Enter the value of i: ");
//     scanf("%d",&v1.i);

//     printf("Enter the value of j: ");
//     scanf("%d",&v1.j);

//     printf("the vector is: %di+%dj",v1.i,v1.j);

//     return 0;
// }


// 2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it. 
// The vectors must be two–dimensional.

// #include <stdio.h>

// struct vector
// {
//     int i;
//     int j;
// };

// struct vector sumVector(struct vector, struct vector);

// struct vector sumVector(struct vector v1, struct vector v2)
// {
//     struct vector v3;

//     v3.i = v1.i + v2.i;
//     v3.j = v1.j + v2.j;

//     return v3;
// }

// int main()
// {
//     struct vector v1, v2, v3;

//     printf("Enter the value of v1(i): ");
//     scanf("%d", &v1.i);

//     printf("Enter the value of v1(j): ");
//     scanf("%d", &v1.j);

//     printf("Enter the value of v2(i): ");
//     scanf("%d", &v2.i);

//     printf("Enter the value of v2(j): ");
//     scanf("%d", &v2.j);

//     v3 = sumVector(v1, v2);

//     printf("The third vector is: %di+%dj", v3.i, v3.j);

//     return 0;
// }

// 3. Twenty integers are to be stored in memory. What will you prefer- Array or 
// structure? 

// I will preffer the array because we are storeing the same type of value (int).



// 4. Write a program to illustrate the use of arrow operator → in C. 

// #include<stdio.h>

// struct class
// {
//     char name[20];
//     int rollNumber;
// };


// int main()
// {
//     struct class s1 = { "Surya", 23};
//     struct class s2 = { "Captain", 11};

//     struct class* ptr1 = &s1;
//     struct class* ptr2 = &s2;

//     printf("Name: %s\nRoll Number: %d\n",ptr1->name,ptr1->rollNumber);
//     printf("Name: %s\nRoll Number: %d\n",(*ptr2).name,(*ptr2).rollNumber);

//     return 0;
// }


// 5. Write a program with a structure representing a complex number. 

// #include<stdio.h>

// struct complexNumber
// {
//     int real;
//     int imaginary;
// };


// int main()
// {
//     struct complexNumber num1 = {4,5};
//     struct complexNumber num2 = {2,8};

//     printf("%d+%di\n",num1.real,num1.imaginary);
//     printf("%d+%di\n",num2.real,num2.imaginary);


//     return 0;
// }

// 6.  Create an array of 5 complex numbers created in Problem 5 and display them 
//     with the help of a display function. The values must be taken as an input from 
//     the user.


// #include<stdio.h>

// struct complexNumber
// {
//     int real;
//     int imaginary;
// };

// void display(struct complexNumber []);

// void display(struct complexNumber num[])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         printf("The value of %d complex number: %d+%di\n",i,num[i].real,num[i].imaginary);
//     }
    
// }



// int main()
// {
//     struct complexNumber num[5];
    
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the real value of %d: ",i+1);
//         scanf("%d",&num[i].real);
//         printf("Enter the imaginary value of %d: ",i+1);
//         scanf("%d",&num[i].imaginary);
//     }
    
//     display(num);

//     return 0;
// }


// 7. Write problem 5’s structure using ‘typedef’ keywords.

// #include<stdio.h>

// typedef struct complexNumber
// {
//     int real;
//     int imaginary;
// }complex;

// void display(complex []);

// void display(complex num[])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         printf("The value of %d complex number: %d+%di\n",i,num[i].real,num[i].imaginary);
//     }
    
// }



// int main()
// {
//     complex num[5];
    
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the real value of %d: ",i+1);
//         scanf("%d",&num[i].real);
//         printf("Enter the imaginary value of %d: ",i+1);
//         scanf("%d",&num[i].imaginary);
//     }
    
//     display(num);

//     return 0;
// }


// #include<stdio.h>

// typedef struct 
// {
//     int real;
//     int imaginary;
// } complex;


// int main()
// {
//     complex num1 = {4,5};
//     complex num2 = {2,8};

//     printf("%d+%di\n",num1.real,num1.imaginary);
//     printf("%d+%di\n",num2.real,num2.imaginary);


//     return 0;
// }



// #include <stdio.h>

// typedef struct vector
// {
//     int i;
//     int j;
// }vec;

// vec sumVector(vec, vec);

// vec sumVector(vec v1, vec v2)
// {
//     vec v3;

//     v3.i = v1.i + v2.i;
//     v3.j = v1.j + v2.j;

//     return v3;
// }

// int main()
// {
//     vec v1, v2, v3;

//     printf("Enter the value of v1(i): ");
//     scanf("%d", &v1.i);

//     printf("Enter the value of v1(j): ");
//     scanf("%d", &v1.j);

//     printf("Enter the value of v2(i): ");
//     scanf("%d", &v2.i);

//     printf("Enter the value of v2(j): ");
//     scanf("%d", &v2.j);

//     v3 = sumVector(v1, v2);

//     printf("The third vector is: %di+%dj", v3.i, v3.j);

//     return 0;
// }


// 8. Create a structure representing a bank account of a customer. What fields did 
//    you use and why? 


// #include<stdio.h>

// typedef struct bankAccount
// {
//     char accountHolder_name[20];
//     long account_number; // As account number can be lager then 10 digits.
//     char accountHolder_contact[15]; // I have used char to store number because  to store value like '+' and '-' .
//     char accountHolder_email[20];
//     char account_type[15];
// }accountHolder;


// int main()
// {
//     accountHolder v1;

//     printf("Name of account holder:");
//     gets(v1.accountHolder_name);

//     printf("Account Number: ");
//     scanf("%d",&v1.account_number);

//     fflush(stdin);

//     printf("Contact of account holder: ");
//     gets(v1.accountHolder_contact);

//     printf("Email of account holder:");
//     gets(v1.accountHolder_email);

//     printf("Whats the account type (saving,buisness,pensen)?: ");
//     gets(v1.account_type);

//     printf("Name: %s\n",v1.accountHolder_name);
//     printf("Account: %d\n",v1.account_number);
//     printf("Contact: %s\n",v1.accountHolder_contact);
//     printf("Email: %s\n",v1.accountHolder_email);
//     printf("Type: %s\n",v1.account_type);

//     return 0;
// }


// 9. Write a structure capable of storing date. Write a function to compare those 
//    dates.

// #include <stdio.h>

// struct dates
// {
//     int day;
//     int month;
//     int year;
// };

// void compare(struct dates d1, struct dates d2);

// void compare(struct dates d1, struct dates d2)
// {
//     if (d1.year < d2.year)
//     {
//         printf("The date '%d/%d/%d' comes first.", d1.day, d1.month, d1.year);
//     }
//     else if (d2.year < d1.year)
//     {
//         printf("The date '%d/%d/%d' comes first.", d2.day, d2.month, d2.year);
//     }
//     else if (d2.year == d1.year)
//     {

//         if (d1.month < d2.month)
//         {
//             printf("The date '%d/%d/%d' comes first.", d1.day, d1.month, d1.year);
//         }
//         else if (d2.month < d1.month)
//         {
//             printf("The date '%d/%d/%d' comes first.", d2.day, d2.month, d2.year);
//         }
//         else if (d2.month == d1.month)
//         {

//             if (d1.day < d2.day)
//             {
//                 printf("The date '%d/%d/%d' comes first.", d1.day, d1.month, d1.year);
//             }
//             else if (d2.day < d1.day)
//             {
//                 printf("The date '%d/%d/%d' comes first.", d2.day, d2.month, d2.year);
//             }
//             else if (d2.day == d1.day)
//             {
//                 printf("Both the dates are same.");
//             }
//             else
//             {
//                 printf("Somthing went worng!!");
//             }
//         }
//         else
//         {
//             printf("Somthing went worng!!");
//         }
//     }
//     else
//     {
//         printf("Somthing went worng!!");
//     }
// }

// int main()
// {
//     struct dates date1 = {11, 10, 2006};
//     struct dates date2 = {23, 4, 2006};

//     compare(date1, date2);

//     return 0;
// }



// 10. Solve problem 9 for time using ‘typedef’ keyword.

#include <stdio.h>

typedef struct dates
{
    int day;
    int month;
    int year;
}DATE;

void compare(DATE d1, DATE d2);

void compare(DATE d1, DATE d2)
{
    if (d1.year < d2.year)
    {
        printf("The date '%d/%d/%d' comes first.", d1.day, d1.month, d1.year);
    }
    else if (d2.year < d1.year)
    {
        printf("The date '%d/%d/%d' comes first.", d2.day, d2.month, d2.year);
    }
    else if (d2.year == d1.year)
    {

        if (d1.month < d2.month)
        {
            printf("The date '%d/%d/%d' comes first.", d1.day, d1.month, d1.year);
        }
        else if (d2.month < d1.month)
        {
            printf("The date '%d/%d/%d' comes first.", d2.day, d2.month, d2.year);
        }
        else if (d2.month == d1.month)
        {

            if (d1.day < d2.day)
            {
                printf("The date '%d/%d/%d' comes first.", d1.day, d1.month, d1.year);
            }
            else if (d2.day < d1.day)
            {
                printf("The date '%d/%d/%d' comes first.", d2.day, d2.month, d2.year);
            }
            else if (d2.day == d1.day)
            {
                printf("Both the dates are same.");
            }
            else
            {
                printf("Somthing went worng!!");
            }
        }
        else
        {
            printf("Somthing went worng!!");
        }
    }
    else
    {
        printf("Somthing went worng!!");
    }
}

int main()
{
    DATE date1 = {11, 10, 2006};
    DATE date2 = {23, 4, 2006};

    compare(date1, date2);

    return 0;
}
