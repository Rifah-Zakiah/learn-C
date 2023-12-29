//This file is the conditionals of C language.
#include <stdio.h>
int main ()
{
    int age;
    printf("Please enter age:");
    scanf("%d", &age);
    if (age>=18)  /* Simple if-else or only if can work with only one condition; if can work without else 
    but there must be a if before else with the condition. */
    {
        printf("Adult.\nThey can vote.\nThey can drive.\n");
    }
    else if (age>=13 && age<18) // else if is used to check multiple conditions.
    {
        printf ("Teenager.\nThey are trouble.\n");
    }
    else
    {
        printf("Child.\nThey are helpless.\n");
    }
    //nested if-else is possible, i.e, one condition inside of another condition.
    //Below is the code to find a positive even integer.
    int number;
    printf("Enter a number:\n");
    scanf ("%d", &number);

    if (number >=0)
    {
       printf("positive\n");
       if (number % 2 ==0)
       {
        printf ("even\n");
       }else
       {
        printf("odd\n");
       }
    } else
    {
        printf ("negative\n");
        if (number % 2 ==0)
       {
        printf ("even\n");
       }else
       {
        printf("odd\n");
       }
    }
   return 0;
    
}