#include<stdio.h>

int main(){

    //=>Write a program to print multiplication table of a given number n.

    // int n;
    // printf("Enter the number: ");
    // scanf("%d",&n);

    // for (int i = 1; i <=10 ; i++)
    // {
    //     printf("%d\n",n*i);
    // }

    // int i = 1;
    // do
    // {
    //     printf("%d\n",n*i);
    //     i++;
    // } while (i<=10);
    
    // while (i<=10)
    // {
    //     printf("%d\n",n*i);
    //     i++;
    // }
    

    //=>Write a program to print multiplication table of 10 in reversed order.

    // int n=10;

    // for (int i = 10; i > 0; i--)
    // {
    //     printf("%d\n",n*i);
    // }

    // int i =10;
    
    // do{
    //     printf("%d\n",n*i);
    //     i--;
    // }while(i>0);

    // while(i>0){
    //     printf("%d\n",n*i);
    //     i--;
    // }


    //=>A do while loop is executed: 
    // a. At least once. 
    // b. At least twice. 
    // c. At most once.


    //=> A
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // int i =1;

    // do
    // {
    //     printf("%d\n",i);
    //     i++;
        
    // } while (i<=n);


    //=>B
    // int a;
    // printf("Enter a number: ");
    // scanf("%d",&a);
    // int i=0;

    // do
    // {
    //     printf("%d\n",i);
    //     i++;
    // } while ( a==0 && i<a+2 || a==1 && i < a+1 || i<=a );

    //=>C
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);

    // int i = 0;

    // do
    // {
    //     printf("%d",i);
    //     i++;
    // } while (2>3);



    //=>Write a program to sum first ten natural numbers using while loop.
    // int n = 0;
    // int i = 1;
    // while (i<=10)
    // {
    //     n += i;
    //     printf("%d\n",n);
    //     i++;
    // }

    //=>Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

    //int n = 0;

    // for (int i = 1; i <= 10; i++)
    // {
    //     n += i;
    //     printf("%d\n",n);
    // }

    // int i = 1;
    // do
    // {
    //     n += i;
    //     printf("%d\n",n);
    //     i++;
    // } while (i<=10);


    //=>Write a program to calculate the sum of the numbers occurring in the multiplication table of 8. (consider 8 x 1 to 8 x 10). 
    
    // int n = 8;
    // int M = 0;
    // int S = 0;
    
    // for (int i = 1; i <= 10; i++)
    // {
    //     M = n*i;
    //     S += M;

    //     printf("%d => %d\n",M,S); 
        
    // }

    //=>Write a program to calculate the factorial of a given number using a for loop.

    // int n ;
    // int M = 1;
    // printf("Enter a number: ");
    // scanf("%d",&n);



    // if (n==0)
    // {
    //     printf("Factorial of zero is zero.");
    // }
    // else
    // {
    //     for (int i = n; i > 0; i--)
    // {
        
    //     M *= i;
    // }
    //     printf("%d\n",M);
    // }
    
    
    //=>Repeat 8 using while loop.

    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);

    // int M = 1;
    // int i = 1;

    // while (i<=n)
    // {
    //     M *= i;
    //     i++;
    //     printf("%d\n",M);
    // }
    
    

    //=> Write a program to check whether a given number is prime or not using loops. 

    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);

    // int prime = 0;

    // if (n==0||n==1)
    // {
    //     printf("%d is not a prime number.",n);
    // }
    // else
    // {
    //     for (int i = 2; i <= n; i++) // for(int i = 2; i<=n/2;++i)
    //     {
    //         if (n % i == 0)
    //         {
    //             prime = 1;
    //             break;
    //         }
    //     }
    // }

    // if (prime)
    // {
    //     printf("%d is not a prime number.",n);
    // }else
    // {
    //     printf("%d is a prime number.");
    // }
    
    
    //=> Implement 10 using other types of loops.

    //=> Do while
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);

    // int i = 2;
    // int prime = 0;

    // if (n==0||n==1)
    // {
    //     printf("%d is not a prime number.",n);
    // }
    
    // do
    // {
    //     if (n%i == 0)
    //     {
    //         prime = 1;
    //         break;
    //     }
    //     i++;
        
    // } while (i<n);

    // if (prime)
    // {
    //     printf("%d is not a prime number.",n);
    // }else
    // {
    //     printf("%d is a prime number.",n);
    // }
    
    
    //=> While
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int i = 2;
    int prime = 0;

    while (i<n)
    {
        if (n%i == 0)
        {
            prime = 1;
        }
        i++;
        
    }

    if (prime)
    {
        printf("%d id not a prime number.",n);
    }else
    {
        printf("%d is a prime number.",n);
    }
    
    
    

    return 0;
}