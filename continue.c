//continue: skip the mentioned condition.
//print all the odd numbers from 5 to 50.
#include<stdio.h>
int main () {
    for (int i = 5; i <= 50; i++)
    {
        if (i%2==0) // even; 
        {                  
            continue;
        }
        printf("%d\n", i);
    }
    /* same code with odd approach:
    for (int i = 5; i<=50; i++){
        if ( i%2 != 0){
            printf ("%d", i);
        }
    }
    */
 return 0;   
} 