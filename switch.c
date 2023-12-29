//This file will show the execution of the CONDITIONAL OPERATOR "SWITCH".
#include<stdio.h>
int main () {
    int day;
    printf("Enter day(1-7):"); //1-sunday, 2-mon,3- tues and so on.
    scanf("%d", &day);
    switch (day)
    { //Cases work like if or else if;
    case 1: printf("Sunday\n");
        break;
     case 2: printf("Monday\n");
        break;
     case 4: printf("Wednesday\n"); //Here it can be seen that cases can be in any order. 
        break;
     case 3: printf("Tuesday\n");
        break;
     case 5: printf("Thursday\n");
        break;
     case 6: printf("Friday\n");
        break;
     case 7: printf("Saturday\n");
        break;    
    default: printf("Not a day!\n");//Default works like else. That is it will show a result if none of the dates are unapplicable. 
        break;
    } //Cases can also be defined by characters;
    char vowel;
    printf("Enter any of the vowels\n", 'alphabet');
    scanf("%s", &vowel);
    switch (vowel)
    {
    case 'a': printf("a for apple\n");
      break;
   case 'e': printf("e for elephant\n");
      break;
   case 'i': printf("i for ink\n");
      break;
   case 'u': printf("u for umbrella\n");
      break;
   case 'o': printf("o for octopus\n");
      break;
    default: printf("Opps! Not a vowel\n");
      break;
    } 
return 0;
}