//Recursion a function calling itself. It recurs.
#include<stdio.h>
void printHW(int count);  //function to print Hello World n times.
int sum(int n);  //function to print sum of n natural number.
int fact(int n);  //function for n factorial.
float cnv_temp(float cel);
int fib(int n);
int main(){
    printHW(2);
    printf ("Sum is: %d\n", sum(5));
    printf("Factorial is:%d\n", fact(5));
    printf("Fahrenheit temparature is: %f\n", cnv_temp(36.9));
    printf("Fibonacci term is: %d\n", fib(6));

    return 0;
}
// recuesive function 
void printHW(int count){
    if (count ==0)
    {
        return;   
    }
    
    printf ("Hello World\n");
    printHW(count-1); //function calling itself
}
int sum(int n){
    if (n == 1)  //DEclaration of base case.
    {
        return 1;
    }
    
    int sum_nm1 = sum(n-1); //sum of 1 to n.
    int sum_n = sum_nm1 + n;
    return sum_n;
}
int fact(int n){
    if (n == 1) //Without this base case, there will be a stack overflow which will lead to program crash.
    {    //stack overflow=infinite loop ---> leads to program crash.
        return 1;
    }
    
    int fact_nM1 = fact(n-1);
    int fact_n = fact_nM1*n;
    return fact_n;
}
float cnv_temp(float cel){
    float far = cel * (9.0/5.0) + 32;
    return far;
}
int fib(int n){
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    
    int fib_nM1 = fib(n-1);
    int fib_nM2 = fib(n-2); 
    int fib_n = fib_nM1 + fib_nM2;
    return fib_n;
}
