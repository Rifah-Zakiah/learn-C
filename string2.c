/*So apparently the gets and puts functions are not working after a scanf function where a string is taken as input.
I've tried with seperate string and also with the previously declared string, nothimg helps.
The function copied from the previous file works fine in a blank file but not in that specific file.
This thing really needs a debugging.
This is why in this file we will play with this function.
*/
#include <stdio.h>
#include <string.h> //This header is used to use the string library functions.
int countLength(char arr[]);//Manually count the length of a string.
void checkchar(char arr[], char chr); //To check if a char is present in a string;

int main(){
    char str [100];
    printf("Enter Full name:");
//input output functions of string with multi-words(with spaces):
    gets(str);//for input
    puts(str);//for output
    //Here the output "Echos";that is whatever is the input it comes as the same in the output.
//gets() is unsafe since it cannot determine the size of the string. In that case fgets() is used. 
    printf("Enter anything:");
    fgets(str, 100, stdin);// str
    puts(str);
//string using pointer:
    char *canChange = "Hello world"; //pointer notation of string.
    puts(canChange);
    canChange = "Hello";//the value in the pointer notation of string can be changed.
    puts(canChange);
    char cannotChange[] = "Hello world";//Array notation of string
    puts(cannotChange);//in array notation of a string the value assinged cannot be changed.
//Program to count the length of input:
    char name[100];
    printf("Enter name:");
    fgets(name, 100, stdin);
    printf("Length is: %d\n", countLength(name));
//program to take the input characterwise or using %c:
    char ch;
    int i=0;
    printf("Enter characters:\n");
    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
//program to find if charac ter is in a string or not:
    char arr[] = "HelloWorld";    
    char chr = 'W';
    checkchar(arr, chr);

    return 0;
}
int countLength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count-1;
}
void checkchar(char arr[], char chr){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == chr)
        {
            printf("character is present!");
            return;
        }
    }
    printf("character is NOT present!");    
}