//String = a character array with termination ('\0')
#include <stdio.h>
#include <string.h> //This header is used to use the string library functions.
void printString(char arr[]);//to print all the character in a string by loop.
void salting(char password[]);//to add salt at the end of a password.
void slice(char str[], int n, int m); //to slice the string from index n to m.
int countVowels(char str[]); //to count the number of vowels in a given string.

 int main(){
    char firstName[] = "Rifah";//double quotation is must
    char lastName[] = "Zakiah";

    printString(firstName);
    printString(lastName);
//input & output in string:
    char name[50];
    printf("Enter name:");
    scanf("%s", name);//format specifier of string is %s. Here while enter null char is not added; 
//the format specifier auto adds the null char at the end.
    printf("Your name is %s.\n", name);
//to print the length of name using library function:
    int length = strlen(firstName);
    //the above step is crucial as strlen(str) gives output on long unsigned. So conversion in int is a must.
    printf("length is: %d\n", length);
//to copy string values using library function:
    char oldstr[] = "Old string";
    char newstr[] = "New string";
    strcpy(newstr, oldstr);
    puts(newstr);//output will be "Old string" since due to the above function oldstr value is copied in the newstr.
//To concatenate 2 strings:
    char str1[100] = "Hello ";//Here the size declaration is a must.
    char str2[] = "World";
    strcat(str1, str2);
    puts(str1);
//TO compare 2 strings ucing library function:    
    char strA[] ="Apple"; //ASCII value of A is 65.
    char strB[] ="Banana";//ASCII value of B is 66.
    printf("%d\n", strcmp(strA, strB));//65-66=-1. So output is -1.
    printf("%d\n", strcmp(strB, strA));//66-65=1. So input is 1.
//A program using the term SALTING:
    char password[100];
    printf("Enter password:\n");
    scanf("%s", password);
    salting(password);
//A program to slice a given string from index n=3 to m=6:
    char str[] = "HelloWorld";
    slice (str, 3, 6);  
//A program to count the number of vowels in a given string:
    printf("Number of vowels in string is: %d\n", countVowels(str));             

    return 0;
 }
 void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++) //special condition for null char
    {
        printf("%c", arr[i]);
    }
    printf("\n");
 }
 void salting(char password[]){
    char salt[] = "123";
    char newPass[200];
    strcpy(newPass, password);//newPass = given password is copied here = "test"(let)
    strcat(newPass, salt);//newPass = "test"+"123" = "test123"(salt is joined at last)
    puts(newPass);//printing new password with salt.
 }
 void slice(char str[], int n, int m){//n and m has to be valid value
    char newstr[100];
    int j = 0; //initialization for new string
    for (int i = n ; i <= m; i++, j++)
    {
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
 }
 int countVowels(char str[]){
    int count = 0; //initializing the count of vowels;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
 }