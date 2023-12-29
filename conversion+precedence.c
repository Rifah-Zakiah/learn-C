// In this file the arithmatic conversions will be seen.
#include <stdio.h>
int main()
{
    printf("%d\n", 2/3); //here only 0 output will come as values after decimals will nit be count.
    printf("%f\n", 2.0/3); // decimal values will be shown. For exact value float is used.
    /*
    In datatype conversion the compiler itself will convert a small byte datatype into a larger type data type;
    such as: int>float, float>double, int>double etc. This is called implicit conversion.
    but a compiler will never convert a bigger byte datatype to smaller type; so float>int will not occur simply.
    Here the programmer needs to seperate commands to show the output into smaller datatype. This is called explicit conversion.
    A problem like this is shown below:
    */
   int a=(int) 1.999999;
   printf("%d", a);
/* Here, all the values after decimal is removed. 
The compiler will never round up the value, it'll totally delete all the values after decimal while conversion.
Arithmatic operator presedence (priority): () > *,/,% > +,- > =
 */
printf("%d\n", 4+9*10);
/* *, /, % these three has same precedence. If these are in an operation at the same time, then ASSOCIATIVITY will be followed.
In associativity mathematical calculations will be done fron left to right order.
*/
printf("%d\n", 4*3/6*2);
// OPERATOR PRECEDENCE: NOT[!] > *,/,% > +,- > [<,<=, >, >=] >[==,!=]> Logical [&&>||]> ={Assignment Operator}
return 0;
}