//DMA:- Dynamic Memory Allocation;
#include<stdio.h>
#include<stdlib.h>

int main (){
{//Program to store the price of 5 thigs in dma:
    float *ptr;
    ptr = (float*)malloc(5*sizeof(float));
    //Accessing the storage is similar to Arrays:
    ptr[0] = 100.55;
    ptr[1] = 120.75;
    ptr[2] = 200.95;
    ptr[3] = 109.65;
    ptr[4] = 400.99;
    //All the above memory allocaton is going to take place in the Run time and not in the compile time.
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", ptr[i]);
    }
}
{//using calloc:
    int n, *ptr;
    printf("Enter an integer: ");
    scanf("%d", &n);
    ptr = (int*)calloc(n, sizeof(int));//initializes with null values, i.e, 0.
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);//will print 0.
    }
//to free up space, use free()
    free(ptr);//this frees up all the spaces which was allocated in the previously used calloc;
    //now we can newly allote values in ptr.
    ptr = (int*)calloc(2, sizeof(int));//initializes with null values, i.e, 0.
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", ptr[i]);//will print 0.
    }
}
{
    int *ptr;
    ptr = (int*)calloc(4, sizeof(int));
    printf("Enter integers(4): \n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &ptr[i]);
    }
    ptr = realloc(ptr, 6);
    printf("Enter integers(6): \n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &ptr[i]);
    }
//To print the data taken as input:
    for (int i = 0; i < 6; i++)
    {
        printf("The number %d is %d\n", i, ptr[i]);
    }
}
{
//Program to take 5 int from the user and also print them(using calloc):
    int *ptr;
    ptr = (int*)calloc(5, sizeof(int));
    printf("Enter integers(5): \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    //To print the data taken as input:
    for (int i = 0; i < 5; i++)
    {
        printf("The number %d is %d\n", i, ptr[i]);
    }
}
{
    int *ptr;
    ptr = (int*)calloc(5, sizeof(int)); 
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    for (int i = 0; i < 5; i++)
    {
        printf("The number %d is %d\n", i, ptr[i]);
    }
    ptr = realloc(ptr, 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;
    for (int i = 0; i < 6; i++)
    {
        printf("The number %d is %d\n", i, ptr[i]);
    }
}
    return 0;
}