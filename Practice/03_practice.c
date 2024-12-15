#include <stdio.h>
#include<ctype.h>
int main()
{

    /*
    Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there
    are three subjects and take the marks as input from the user.
    */

    // float sub_1,sub_2,sub_3,maths,english,hindi,total;

    // printf("Enter Your Maths marks: ");
    // scanf("%f",&maths);
    // sub_1 = (maths/100)*100;

    // printf("Enter Your English marks: ");
    // scanf("%f",&english);
    // sub_2 = (english/100)*100;

    // printf("Enter Your Hindi marks: ");
    // scanf("%f",&hindi);
    // sub_3 = (hindi/100)*100;

    // total = ((maths+english+hindi)/300)*100;

    // if(sub_1>33 && sub_2>33 && sub_3>33 && total>40){
    //     printf("You passed the exam.\n");
    // } else{
    //     printf("You failed the exam.\n");
    // }

    /*Calculate income tax paid by an employee to the government as per the slabs
    mentioned below:
    Income Slab      Tax
    2.5L – 5.0L      5%
    5.0L - 10.0L     20%
    Above 10.0L      30%
    Note that there is no tax below 2.5L. Take income amount as an input from the user*/

    // float income;

    // printf("Enter your income(In Lakh's): ");
    // scanf("%f",&income);

    // if (income>=10)
    // {
    //     printf("You have to pay 30%% tax.");
    // } else if (income<10 && income>=5)
    // {
    //     printf("You have to pay 20%% tax.");
    // }
    //  else if (income<5 && income>=2.5)
    // {
    //     printf("You have to pay 5%% tax.");
    // }
    //  else if (income<2.5 && income>0.0000000000001)
    // {
    //     printf("You did not have to pay any tax.");
    // } else{
    //     printf("Enter a valied value.");
    // }

    /*Write a program to find whether a year entered by the user is a leap year or not.
    Take year as an input from the user.*/

    // int year, leap_year;

    // printf("Enter the year you want to check: ");
    // scanf("%dd", &year);

    // if (year>0)
    // {
    //     leap_year = year % 4;

    //     if (leap_year == 0)
    //     {
    //         printf("Yes %d is a leap year.\n", year);
    //     }
    //     else
    //     {
    //         printf("%d is not a leap year\n", year);
    //     }
    // }
    // else
    // {
    //     printf("Enter a valid value.\n");
    // }



    // extra learning

    // float a;

    // printf("enter the value of a: ");
    // scanf("%f",&a);

    // printf("%f\n",a);

    // if (a>0.00000000000000000000000000000000000001) // a float given value when we enter any char value it is larger then 0 but so smaller then 1
    // {
    //     printf("The value of a is true.");
    // }else{
    //     printf("The value of a is false.");
    // }
    



    /*Write a program to determine whether a character entered by the user is 
    lowercase or not.*/


//    #include<ctype.h>  // This allow us to use isupper() and islower()

//     char ch;

//     printf("Enter a single alphabet  : ");
//     scanf("%c",&ch);

//     if (isupper((unsigned char)ch))
//     {
//        printf("Yes the value is in upper case.");
//     }else if(islower((unsigned char)ch))
//     {
//         printf("The value is in lower case.");
//     }else{
//         printf("Enter a corret value.");
//     }
    
    //=> there is an another way to solve this by using ascii values
    // https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html


    // as char value is store as a number so float will not give value 0, therefor we can't use the result method to check the value is correst or not

    char one_letter;

    printf("Enter the alphabet: ");
    scanf("%c",&one_letter);

    printf("%d\n",one_letter);


    if (one_letter>=65 && one_letter<=90)
    {
        printf("It is in upper case.\n");
    }else if (one_letter>=97 && 122)
    {
    }else 
        printf("It is in lower case.\n");
    {
        printf("Enter a correct value.\n");
    }
    
    
    
    

    



    
    //Write a program to find greatest of four numbers entered by the user

   
    
    // float a,b,c,d;
    // int result;

    // printf("Enter the value of first number: \n");
    // result = scanf("%f",&a);
    // if (result != 1)
    // {
    //    printf("Enter a correct value.");
    //    return 1;
    // }
    
    // printf("Enter the value of second number: \n");
    // result = scanf("%f",&b);
    // if (result != 1)
    // {
    //    printf("Enter a correct value.");
    //    return 1;
    // }


    // printf("Enter the value of third number: \n");
    // result = scanf("%f",&c);
    // if (result != 1)
    // {
    //    printf("Enter a correct value.");
    //    return 1;
    // }

    // printf("Enter the value of fouth number: \n");
    // result = scanf("%f",&d);
    // if (result != 1)
    // {
    //    printf("Enter a correct value.");
    //    return 1;
    // }

   


    // if(a>b && a>c && a>d){
    //     printf("%f is the greatest.",a);
    // }
    // else if(b>a && b>c && b>d){
    //     printf("%f is the greatest.",b);
    // }
    // else if(c>a && c>b && c>d){
    //     printf("%f is the greatest.",c);
    // }
    // else if(d>a && d>b && d>c){
    //     printf("%f is the greatest.",d);
    // }
    


    return 0;
}