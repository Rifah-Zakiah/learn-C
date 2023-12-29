// POINTERS: stores the memory address of a variable.
#include<stdio.h>
int main (){
    int age = 19;
    int *ptr = &age;  //stores the memory address of age.
    int _age = *ptr;
    printf("%d\n", _age); //new variable stores the value of age.
    //In order to print the adress of variable:-
    printf("%p\n", &age); //Value of the memory adress of age in hexadecimal number format.
    printf("%u\n", &age); //Value of the memory address of age in decimal format.
    printf("%u\n", ptr); //This value is same as the value of &age since ultimately the value stored in ptr is The memory location of age.
    // ptr==&age; the values of these two are the same.
    printf("%u\n", &ptr); //address of pointer.
    //In order to print the value of the variable:-
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
    //pointer arithmatic: increment & decrement. (*, /, % will not work)
    ptr++; //increment occurs by th addition of space=1 datatype
    printf("%u\n", ptr); //increases by 4 as 1 int= 4 bytes.
    ptr--; //similar for decrement
    printf("%u\n", ptr); //decreases by 4 bytes.
    float prc = 100.00;
    float *p = &prc;
    printf("%u\n", p);
    p++; //increases by 1 float size = 4 bytes.
    printf("%u\n", p);
    p--; //decreases by 1 float size = 4 bytes.
    printf("%u\n", p);
    char star = '*';
    char *pt = &star;
    printf("%u\n", pt);
    pt++; //increases by 1 char size = 1 bytes
    printf("%u\n", pt);
    pt--; //decreases by 1 char size = 1 bytes.
    printf("%u\n", pt);
//substraction in pointer: it'll show the difference in the datatypes not in bytes(unlike ++/--).
    int a = 5;
    int b = 7;
    int *ptr_a = &a; //pointer for a.
    int *ptr_b = &b; //pointrer for b.
    printf("%u, %u, Difference between pointers: %u\n", ptr_a, ptr_b, ptr_a-ptr_b);/* Here the difference will not be shown in bytes
    It'll rather show the difference in the memory location converted to the datatype sign.
    Here, 5 is stored just before 7, thus the difference in their memory location is 4 bytes(seen in output)
    4 bytes = 1 int, thus the output is 1.*/
//comparison between pointers can also be done with ==; the output will be 0/1 i.e, true/false.
     ptr_b = &a; //storing the address of a in pointer of b.
     printf("comparison between pointers: %u\n", ptr_a == ptr_b); //output shall be true, i.e, 1.
//subtraction and comparison will only be among same datatypes; not among different datatypes.  

    int *pntr;
    int x;
    pntr=&x;
    *pntr=0;  //Indirectly assigning the value of x through address.
    printf("x=%d\n", x); //output should be 0.
    printf("*pntr=%d\n", *pntr); //again the output should be 0.
    *pntr+=5; //adding 5 to the value of x (indirectly).
    printf("x=%d\n", x); //output should be 5.
    printf("*pntr=%d\n", *pntr); //output should be 5.
    (*pntr)++; //increment operator.
    printf("x=%d\n", x); //output should be 6.
    printf("*pntr=%d\n", *pntr); //output should be 6.
}