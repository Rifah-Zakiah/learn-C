//Question: Find the sum of n integers, n input by the users:
#include<stdio.h>
int main (){
    int n;
    printf("Enter an integer:\n");
    scanf ("%d", &n);
    int sum=0;
    for (int i = 0; i <= n; i++)
    {
        sum=sum+i;      //Code for sum of n integers.
    }
    printf("The sum is %d\n", sum);

    for (int i = n; i >= 0; --i)
    {
     printf ("%d\n", i);   // Code to print them in reverse.
    }
//If we want to do the same with one for loop then, alternative 1:-
printf("Enter an integer:\n");
    scanf ("%d", &n);
    for (int i = 0, j=n; i <=n && j>=0 ; i++, j--)
    {
         sum=sum+i;   //sum += i; here the output sum will come with the previous sum.
         printf ("%d\n", j);
    }
    printf("The sum is %d\n", sum);
//Again if we want to do this with one loop and one iterator/ variable:-
//This can only be done with sum bcz reverse order sum ans frwd order sum is the same.
 printf("Enter an integer:\n");
    scanf ("%d", &n);
    for (int j=n; j>=0 ; j--)
    {
         sum=sum+j;    //sum += j; here the output sum will come with the previous sum.
         printf ("%d\n", j);
    }
    printf("The sum is %d\n", sum);   
}