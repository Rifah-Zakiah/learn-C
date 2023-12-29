//while loop: to print the numbers from 0 to n, where n will be provided by the users.
#include<stdio.h>
int main (){
    int n;
    printf ("Enter an integer:\n");
    scanf ("%d", &n);
    int i=0;
    while (i<=n)
    {
        printf("%d\n", i);
        i++;
    }
//same code by for loop, but the initiation will bw different.
    for (int i = 3; i <= n; i++)
    {
        printf("%d\n", i);
    }
//similar code by do while loop:
    do
    {
      printf("%d\n", i);  
      i--;  
    } while (i>=1); // first it'll do and then it'll check the condition.    
//Thus the output will come two times for two different loops
return 0;
}