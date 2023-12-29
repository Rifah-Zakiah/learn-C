//Structure: a user defined collection of values comprising of values of different datatypes. 
#include<stdio.h>
#include<string.h>
//structure is defined by the user outside the main functions like auxillary functions.
struct student //Structure declaration;
{
    char name[100];
    int roll;
    float CGPA;
};
typedef struct ComputerEngineeringStudent //Structure declaration using typedef;
{
    char name[100];
    int roll;
    float CGPA;
}coe;//coe is the nickname for this structure; in main function, only writing this will do.
struct vector//to store x & y components of a vector in 2 ints.
{
    int x;
    int y;
};
struct complexno//to store the real and imaginary parts of a complex numbers.
{
    int r;//this will store the real part of the complex number.
    int i;//this will store the imaginary part of the complex number.
};

void printInfo(struct student s5);//function definition in structure
void Printsum(struct vector v1, struct vector v2, struct vector sum);

int main(){
    struct student s1;
    s1.roll = 1024;
    s1.CGPA = 4.00;
//The name(/any characters) in structure is defined as a string in array notation;
//In array notation of a string the value of the sring cannot be changed, which will apply here as well.
//IN this case we have to copy the string from the structure to the main function and then change its value.
//s1.name = "Rifah" ---> This format cannot be used.
    strcpy(s1.name, "Rifah");
    printf("Student1 name: %s\t roll: %d\t CGPA: %.2f\n", s1.name, s1.roll, s1.CGPA);
//Similarly lets store the info of few more students:
    struct student s2;
    s2.roll = 1025;
    s2.CGPA = 3.95;
    strcpy(s2.name, "Shifah");
    printf("Student2 name: %s\t roll: %d\t CGPA: %.2f\n", s2.name, s2.roll, s2.CGPA);
    struct student s3;
    s3.roll = 1026;
    s3.CGPA = 4.00;
    strcpy(s3.name, "Siam");
    printf("Student3 name: %s\t roll: %d\t CGPA: %.2f\n", s3.name, s3.roll, s3.CGPA);
//Initialization of structure of a 4th student in a single line:
    struct student s4 = {"Zifah", 1027, 3.41};//3 line of code compressed in a single line.
    printf("Student4 name: %s\t roll: %d\t CGPA: %.2f\n", s4.name, s4.roll, s4.CGPA);
//Array of structures:
    struct student CSE[100];
    CSE[0].roll = 1024;
    CSE[0].CGPA = 4.00;
    strcpy(CSE[0].name, "Rifah");
    printf("Student1 name: %s\t roll: %d\t CGPA: %.2f\n", CSE[0].name, CSE[0].roll, CSE[0].CGPA);
//Pointers to structure: to print the data of structure through pointer method:
    struct student *ptr = &s4;
    printf("%u\n", ptr);//Prints the whole address of s4;
    printf("In (*ptr). format, Student4 name: %s\t roll: %d\t CGPA: %.2f\n", (*ptr).name, (*ptr).roll, (*ptr).CGPA);//to print the value in s4 through pointer notation.
    printf("In ptr-> format, Student4 name: %s\t roll: %d\t CGPA: %.2f\n", ptr->name, ptr->roll, ptr->CGPA);//Same shit as the line above just with -> operator.
//Structures to functions: 
    struct student s5 = {"Kifah", 1028, 3.67};
    printInfo(s5);
//Initializing structure using typedef:
    coe S1;
    S1.roll = 1029;
    S1.CGPA = 3.58;
    strcpy(S1.name, "Lifah");
    printf("CE student1 name: %s\t, roll: %d,\t CGPA: %.2f\n", S1.name, S1.roll, S1.CGPA); 
    coe S2 = {"Tifah", 1030, 3.41}; 
    printf("CE student2 name: %s\t, roll: %d,\t CGPA: %.2f\n", S2.name, S2.roll, S2.CGPA);  
//program to find the sum of 2 vectors:
   struct vector v1 = {5, 10};
   struct vector v2 = {8, 14};
   struct vector sum = {0, 0};// or, only {0} can only be given; works the same in both cases.
   Printsum(v1, v2, sum);
//program to store complex numbers and using arrow operator:
   struct complexno n1 = {4, 3};
   struct complexno *pntr = &n1;//assigning pointer notation to use arrow operator.
   printf("Real part is: %d and imaginary part is %d.\n", pntr->r, pntr->i);
}
void printInfo(struct student s5){
    printf("Student5 info:\nname: %s\t roll: %d\t CGPA: %.2f\n", s5.name, s5.roll, s5.CGPA);
}
void Printsum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("Sum of x is: %d.\nSum of y is: %d.\n", sum.x, sum.y);
}