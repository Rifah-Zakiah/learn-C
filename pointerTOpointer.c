//Pointer to pointer variable: stores memory address of another pointer.
#include<stdio.h>

void sq(int n);
void _sq(int *n); //here a pointer will come: an address of a variable will be passed.
//Using the swap function to understand the imp of call by reference.
void swap(int a, int b); //swap means interchanging the values of inputs.
void _swap(int *a, int *b);
void printAddress(int n);
void _printAddress(int *n);
int main(){
   int i=5;
   int *ptr=&i; //the poiner which stores the address of variable i.
   int **pptr=&ptr; //the pointer stores the address of pointer ptr.
// * is "value at address" operator and & is "address of variable operator"
   printf("%d\n", **pptr); //double * is used to print the value of i through pointer to pointer variable.
   
   int number=4;
   sq(number);
   printf ("number=%d\n", number);

   _sq(&number);
   printf("number=%d\n", number);

   int x = 3, y = 5;
   swap(x, y);
   printf("x = %d & y = %d\n", x, y); //Here the output will be the original input values as there is no changes done in them.

   _swap(&x, &y);
   printf("x = %d & y = %d\n", x, y); //Here the value will be changed as the address is passed and not the copy of the value.

   int n=4;
   printf ("%p\n", &n); //This will print the address where the original value of n is stored.
   printAddress(n); //This will print the address where the copied value of n is stored.
   printf ("%p\n", &n); 
   _printAddress(&n); 

   return 0;
   }
   //Call by value(by default): a copy of value is passed and not the original value; 
   void sq(int n){
   n = n*n;
   printf("square=%d\n", n);
   }
   //Call by reference: changes are made directly at the address not in a copy of the value.
   void _sq(int *n){
    *n = (*n) * (*n);
    printf("square=%d\n", *n);
   }
   //By call by Value: will not work in the main function.
   void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d\n", a, b);
   }
   //By using call by reference: By this only the swap function will work in the main function.
   void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
   }
//In order to understand the call of value, this function is called.
   void printAddress(int n){
    printf ("%p\n", &n); //address of this variable will be different though the value is same.
    //This is bcz a copy of n is passed to this function from the main function and not the original; 
    //the coy will have a different address since there is already the original value in the main address of n.
   }
//In call by reference the address remains same and changes is brought in the values.
   void _printAddress(int *n){
    printf ("%p\n", n); //output will be the original address of n as the address is passed.
   }