//Functions in C.
#include<stdio.h>
//function declaration
void printHello();
void salam();
void bonjour();
//functions to find the area of various shapes.
float squareArea(float side);  
float circleArea(float rad);
float rectangleArea(float a, float b);
int main(){ //main function
    printHello(); //function call 
    char ch;
    printf("Enter 'B' if Bangladeshi or 'F' if French:\n");
    scanf("%c", &ch);
    if (ch == 'B')
    {
        salam();
    }else if (ch == 'F')
    {
        bonjour();
    } else
    {
        printHello();
    }
   float x=4.0;
   float y=5.0;
   printf ("Rectangle area is: %f\n", rectangleArea(x, y));//Arguments are those which are passed in "function call"; these can be different from parametre.
   float rad=10;
   printf ("Circle area is: %f\n", circleArea(rad));
   float side=30;
   printf ("Square area is: %f\n", squareArea(side) );
    
    return 0;
}
//function definition
void printHello(){
    printf("Hello!\n");
}
void salam(){
    printHello(); //another function can be called in other function. This function is indirectly called from main.
  printf("Assalamualikum\n");
}
void bonjour(){
    printf("Bonjour\n");  
    printHello(); /*the other function called in this function will be executed on the basis of placement of calls in this function
    and not on the definition of the function.
    */
}
float squareArea(float side){
      return side*side;
   }
   float circleArea(float rad){
      return 3.1416*rad*rad;
   }
   float rectangleArea(float a, float b){
      return a*b;//Here a and b are parameter/formal parametre which are passed in function definition.
   }