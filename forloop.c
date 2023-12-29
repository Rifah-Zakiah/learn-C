//Here for loop along with two operators will be introducedd.
#include <stdio.h>
int main (){
    //i=iteration/ counter; a variable through which you can do something repeatedly and also keep track.
    for (int i = 1; i <= 5; i++) 
    {  
       printf("Hello World\n"); //Through this code, Hello World will be printed 5 times repeatedly. 
    }
    for (int i=1; i<=100; i=i+1){   //By this 2 lined code, all the numbers from 1 to 100 will be printed.
        printf("%d\n", i); 
    }
    for (int i = 10; i >=1; i--) 
    { 
       printf("%d\n", i); //By this 2 lined code, all the numbers from 10 to 1 will be printed in descending order.
    }  //Below is the code to: Print the numbers from 0 to 10.
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    for (float i = 1.0; i <=5.0; i++) //datatype can be float/double or even character type.
    {
      printf("%f\n", i);  
    }
    for (char ch = 'a'; ch <='z'; ch++)
    {
      printf("%c\n", ch);  
    }
//Increment Decrement operators:
// i++ & ++i is increment operator; used to increase the value of i by 1.
//i++ =(pre-increment op) use variable first, then increase; ++i=(post-increment op) increase value first then use the variable.
    int i=1; // i is declared here for while loop.
    printf("%d\n", i++); //use, then increase.
    printf("%d\n", i); //output will be first the used value of i(i.e, 1), then its value will increase. output: 1,2.
    printf("%d\n", ++i); //increaese then use. In above code i's value became 2.
    printf("%d\n", i); // i will first increased to 3; then  output will be the recent value of i which is 3.
// i-- & --i is decrement operator; used to decrease the value of i/assigned variable by 1.
//i-- =(pre-decrement op) use variable first, then decrease; --i=(post-decrement op) decrease value first then use the variable.
    printf("%d\n", i--); //use, then decrease. In above code i's value became 2.
    printf("%d\n", i);//output will be first the recent value of i(i.e, 3), then its value will increase. output: 3, 2.
    printf("%d\n", --i); //decreaese then use. In above code i's value became 2.
    printf("%d\n", i); // i will first decreased to 1; then  output will be the recent value of i which is 1.
//One little example for whileloop: To print Hello World 5 times. 
while (i<=5)
    {
        printf("Hello World\n");
        i++; //This statement very important otherwise the loop will turn into an infinite loop.
    }
    return 0;    
}