// 2. Write a program to take string as an input from the user using %c and %s confirm 
// that the strings are equal.


// #include<stdio.h>
// #include<string.h>

// int main(){
    
//     char str1[30], str2[30],ch;
//     int i = 0;
//     printf("Enter the value of first string: "); // to ask input in %s manner
//     scanf("%29s",&str1);

//     while (ch = getchar() != '\n');  // to remove buffer enterd created by entering in above 'scanf'.

//     printf("Enter the value of second string: ");
//     while ((ch = getchar()) != '\n')  // To get input charecter by charecter
//     {
//         str2[i++] = ch;
//     }
    
//     str2[i] = '\0';  // making the last element a null element

//     if (strcmp(str1,str2) == 0)   // compare the two strings
//     {
//         printf("Both the string are equal.");
//     }
//     else
//     {
//         printf("The strings are not equal.");
//     }
    


//     return 0;
// }



// 3. Write your own version of strlen function from <string.h>


// #include<stdio.h>

// int strlen(char []);

// int strlen(char x[])
// {
//     int length = 0;

//     for (int i = 0; x[i] != 0; i++)
//     {
//         length++;
//     }
    
//     length--;

//     return length;
    
// }

// int main(){
    
//     char str[30];

//     printf("Enter a string: ");
//     fgets(str,sizeof(str),stdin);

//     int length = strlen(str);

//     printf("The length of the string is: %d",length);


//     return 0;
// }



// 4. Write a function slice() to slice a string. It should change the original string such that 
// it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
// for slice. 


// #include<stdio.h>
// #include<string.h>

// char* slice(char *,char *,int,int);

// char* slice(char *st,char *sliced_stirng,int start,int length)
// {

//     for (int i = 0; i < length; i++)
//     {

//         if (st[start+i] == '\0')
//         {
//             sliced_stirng[i] =  '\0';
//             return sliced_stirng;
//         }

//         sliced_stirng[i] = st[start+i];

//     }

//     sliced_stirng[length] = '\0';

//     return sliced_stirng;
// }

// int main(){


//     char st[30];
//     int start,length;
//     char sliced_st[30];

//     printf("Enter the string: ");
//     fgets(st,sizeof(st),stdin);

//     int string_length = strlen(st);

//     if (st[string_length-1] == '\n')
//     {
//         st[string_length-1] = '\0';
//     }
    

//     printf("Enter where sliceing starts: ");
//     scanf("%d",&start);

//     printf("Enter the length of the string: ");
//     scanf("%d",&length);

//     printf("The sliced dtring is: %s",slice(st,sliced_st,3,6));


//     return 0;
// }



// => The another way to do this is

// #include<stdio.h>
// #include<string.h>

// char* slice (char [], int m, int n);

// char* slice (char str[], int m, int n)
// {
//     char* ptr = &str[m];
//     str[n+1] = '\0';

//     str = ptr;

//     return str;

// }
// int main(){

//     char string[30];

//     printf("Enter the value of string: ");
//     fgets(string,sizeof(string),stdin);

//     if(string[strlen(string)- 1] == '\n' )
//     {
//         string[strlen(string)- 1] = '\0';
//     }

//     printf("%s",slice(string,3,6));

//     return 0;
// }




// 5. Write your own version of strcpy function from <string.h>


// #include<stdio.h>

// char* strcpy(char *, char *);

// char* strcpy(char *st2, char *st1)
// {
//     int i = 0;

//     while (st1[i] != '\0')
//     {
//         st2[i] = st1[i];
//         i++;
//     }

//     st2[i] = '\0';
    
//     return st2;
// }


// int main(){
    
//     char string1[30] = "Surya Pratap";
//     char string2[30];

    
    
//     strcpy(string2,string1);

//     printf("The value of string 2 is: %s",string2);

//     return 0;
// }



// 6. Write a program to encrypt a string by adding 1 to the ascii value of its 
// characters. 


// #include<stdio.h>

// void encrypt_string(char []);

// void encrypt_string(char str[])
// {
//     int i = 0;

//     while (str[i] != '\0')
//     {
//         str[i]++;  // str[i] = str[i] + 1;
//         i++;
//     }
    
    
// }
// int main(){
    
//     char str[100];

//     printf("Enter the value of string: ");
//     fgets(str,sizeof(str),stdin);

//     int length = sizeof(str)/sizeof(str[0]);

//     str[length - 1] = '\0';

//     encrypt_string(str);


//     printf("The encrypted string is: %s",str);




//     return 0;
// }



// 7. Write a program to decrypt the string encrypted using encrypt function in 
// problem 6 .

// #include<stdio.h>

// void encrypt_string(char []);

// void encrypt_string(char str[])
// {
//     int i = 0;

//     while (str[i] != '\0')
//     {
//         str[i]++;  // str[i] = str[i] + 1;
//         i++;
//     }
    
    
// }
// void decrypt_string(char str[])
// {
//     int i = 0;

//     while (str[i] != '\0')
//     {
//         str[i]--;  // str[i] = str[i] - 1;
//         i++;
//     }
    
    
// }




// int main(){
    
//     char str[100];

//     printf("Enter the value of string: ");
//     fgets(str,sizeof(str),stdin);

//     int length = sizeof(str)/sizeof(str[0]);

//     str[length - 2] = '\0';

//     encrypt_string(str);


//     printf("The encrypted string is: %s",str);


//     decrypt_string(str);


//     printf("The decrypted string is: %s",str);


//     return 0;
// }




// 8. Write a program to count the occurrence of a given character in a string. 


// #include<stdio.h>
// #include<ctype.h>

// void occur(char [],char);

// void occur(char str[],char x)
// {
//     int count = 0;

//     x = tolower(x);

//     for(int i = 0; str[i] != '\0';i++)
//     {
//         if(tolower(str[i]) == x)
//         {
//             count++;
//         }
//     }

//     printf("There are '%d' number of '%c' in '%s'. ", count , x , str );

// }
// int main(){
    
//     char string[] = "Radhe Radhe";
//     char check;

//     printf("Enter a single character: ");
//     check = getchar();

//     while (getchar() != '\n');


//     occur(string,check);


//     return 0;
// }



// 9. Write a program to check whether a given character is present in a string or not. 

// #include<stdio.h>
// #include<ctype.h>

// void occur(char [],char);

// void occur(char str[],char x)
// {
//     int count = 0;

//     x = tolower(x);

//     for(int i = 0; str[i] != '\0';i++)
//     {
//         if(tolower(str[i]) == x)
//         {
//             count++;
//         }
//     }

//     if (count > 0)
//     {
//         printf("Yes, '%c' is present in '%s'.",x,str);
//     }
//     else
//     {
//         printf("'%c' is not present in '%s'.",x,str);
//     }
    
    

// }
// int main(){
    
//     char string[] = "Radhe Radhe";
//     char check;

//     printf("Enter a single character: ");
//     check = getchar();

//     while (getchar() != '\n');


//     occur(string,check);


//     return 0;
// }


// => the other way is

#include<stdio.h>
#include<ctype.h>


void occur(char [],char);

void occur(char str[],char x)
{
    int count = 0;

    x = tolower(x);

    for(int i = 0; str[i] != '\0';i++)
    {
        if(tolower(str[i]) == x)
        {
            count++;
            break; // this will reduce the number of loops
        }
    }

    if (count)
    {
        printf("Yes, '%c' is present in '%s'.",x,str);
    }
    else
    {
        printf("'%c' is not present in '%s'.",x,str);
    }
    
    

}
int main(){
    
    char string[] = "Radhe Radhe";
    char check;

    printf("Enter a single character: ");
    check = getchar();

    while (getchar() != '\n');


    occur(string,check);


    return 0;
}
