// keep taking input until odd number; i.e, when any odd number will be input, the loop will break and end the program.
//here do while loop is preferable bcz first we have to take input then check with condition.
#include<stdio.h>
int main (){
    int n;
    do
    {
        printf("Enter an integer:\n");
        scanf ("%d", &n);
        if ( n%2 != 0) //detects if n is odd.
        {
            break; // if n is odd the loop will break.
        }
    } while (1);  //But with this true condition this will become an infinite loop.
    //thats why break is used before in order to stop the program.
     printf("Number is odd.\n");
return 0;
}