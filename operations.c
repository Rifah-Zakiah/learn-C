//this code file indicates various types of mathematical operations
#include <stdio.h>
int main()
{
    int a, b;
    printf ("Enter an integer a\n");
    scanf("%d", &a);  

    printf ("Enter an integer b\n");
    scanf("%d", &b);
//Finding the sum by declaring a third variable 'sum'.
    int sum=a+b;
    printf("The summation is %d\n", sum);
//Finding the difference, product and quotient by the usage of mathematical operators.
    printf("The difference is %d\n", a-b);
    printf("The product is %d\n", a*b);
    printf("The quotient is %d\n", a/b);
    printf("The remainder is %d\n", a%b);
    // Valid arithmatic operators in c language are 5: +, -, *, / & %.
//Relational Operators: ==, !=[not equal to], <, >, <= and >=.
    printf("%d\n", 4==4); //This condition is true. Therefore the output will be 1.
    printf("%d\n", 4!=4); //This condition is false. Therefore the output will be 0. 
    printf("%d\n", 4>5); //This statement is not true. Therefore the output will be 0. 
    //Similarly using the rest of the relational operators we get.
    printf ("%d\n", 4<5); //This is true. Output is 1.
    printf ("%d\n", 4<=1); //This is not true. Output is 0.
    printf ("%d\n", 4>=4); //This is true. Output is 1. 
//Logical operators: AND=&&, OR=|| and NOT=!.
    printf("%d\n", 4==4 && 4>2);//For AND operation both the conditions needs to be true. Otherwise the output will br false.
    printf("%d\n", 4==3 && 3<=5);//Here the first condition is false. Thus the output is 0.
    printf("%d\n", 4==3 || 4>2);//For NOT operation if any of the conditions is true, the whole output will be true.
    //In the above OR example, first statement is false but the second statement is true; thus the whole output will be true i.e. 1.
     printf("%d\n", !(4==3 && 3<=5)); //NOT will simply give the opposite output of the main statement.
     //Here the main condition which is inside () will give output 0. But due to ! the opposite output, 1, will be displayed. 
//Assignment operators: THese assign a certain value to store; =, +=, -=, *=, /=, %=.
//Shorthand operators [to shorten the code]: +=, -=, *=, /= & %=.
a=a+b; //This same operation can be done by using shothand, +=.
printf("New value of a is %d\n", a); 
b-=a; //b=b-a     
printf("New value of b is %d\n", b);//Here the output will be b=b-a.
return 0;
}
