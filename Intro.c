#include<stdio.h> //preprocessor directive; without this our c code will not be executed.
//This code in the introduction to variables, dataypes and input output in C.
/*
This is used for multilined comments. 
The above one is a single lined comment.
*/
int main()
{
printf ("Hello World \n"); //Basic output code
int date=21222; //Integer datatype=int[used to store whole number]; date is the variable name. variable can be changed.
char star='*'; //Character datatype=char[used to storecharacters].
float pi=3.1416; //Float datatype=float[used to store decimal].
printf("Today's date is %d\n",date); //\n is to breaK the lines in output.
printf("Star looks like %c\n",star); //%d, %f, %c are format specifiers in c.
printf("Value of pi is %.4f\n", pi);
//Input function
int age;
printf("Enter age:\n");
scanf("%d", &age); //scanf & printf is the library function for input & output. '&' is for the address if the declared variable.
printf("The entered age is %d.\n", age);
return 0; //Declares the end of a code. 0 refers to zero errors.
}