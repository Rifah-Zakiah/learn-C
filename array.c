//Array: To store same datatypes continuously with one collective name.
#include<stdio.h>
void printNum(int arr[], int n);
int countOdd(int ar[], int n); //to find the number of odd numbers in a stored array.
void reverse(int ar[], int n); // to make the given array in reverse
void print(int ar[], int n); //to print the reverse array
void table(int tab[][10], int n, int m, int num); //to print the tables of 2 & 3.
int main(){
    float price[3];
    printf("Enter three prices: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Total price 1: %f\n", price[0]+(0.18*price[0]));
    printf("Total price 2: %f\n", price[1]+(0.18*price[1]));
    printf("Total price 3: %f\n", price[2]+(0.18*price[2]));

//Array is a pointer:
    int aadhar[5];
    //input
    int *ptr = &aadhar[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d index: ", i);
        scanf("%d", &aadhar[i]); //(ptr+i)=&aadhar[i]
    }
    // output
    for (int i = 0; i < 5; i++)
    {
        printf("%d index: %d\n", i, aadhar[i]); //*(ptr+i) = aadhar[i] 
    }
    int arr[] = {1, 2, 3};
    printNum(arr, 3);
//2 D Array: to store and print 3 subj marks  of 2 students;(matrix form = 2x3)
    //To visualize the positions of data in the memory, matrix elemental position system is used;
    int marks [2][3]; //memory storing system _ _ _ | _ _ _
    marks [0][0] = 89;
    marks [0][1] = 98;
    marks [0][2] = 79;

    marks [1][0] = 85;
    marks [1][1] = 96;
    marks [1][2] = 81;
    printf ("%d \n", marks [0][2]); //to print the marks by denoting the position mention in the statement.
    int ar[] = {22, 23, 24, 25, 26, 27, 28, 29};
    printf ("The required number of odd numbers: %d\n", countOdd(ar, 8));
    reverse(ar, 8);
    print(ar, 8);
//To print fibonacci series of nth element.
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \t", fib[i]);
    }
    printf("\n");
//2D array to print the tables;
    int tables[2][10];
    table(tables, 0, 10, 2);
    table(tables, 1, 10, 3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", tables[0][i]);
    }
    printf("\n");//so that the tables of 2 n 3 is printed in the next line.
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", tables[1][i]);
    }
    printf("\n");
    
    return 0;
}
//Array as function:
void printNum(int arr[], int n){ //As array is a pointer, arr[] = *arr; both syntax are correct.
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", i); // \t is for adding one tab space
    }
   printf("\n"); //This is so that the further codes are in next line. 
}
int countOdd(int ar[], int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}void reverse(int ar[], int n){  //this function is reference; bcz array is a pointer;
    for (int i = 0; i < n/2; i++) //Due to this function, the array of the main function has also been changed;  
    {                             //Thats why this is call by reference and not call by value. 
        int val1 = ar[i];
        int val2 = ar[n-i-1];
        ar[i] = val2;
        ar[n-i-1] = val1;
    }
    
} 
void print(int ar[], int n){
    for (int i = 0; i < n; i++)
    {
      printf("%d \t", ar[i]);  
    }
    printf("\n");
}
void table(int tab[][10], int n, int m, int num){ //n=2/rows, m=10/columns, num=2/3(the numbers whose tables will be printed) 
    for (int i = 0; i < m; i++)
    {
        tab[n][i] = num * (i+1);
    }
    
}
