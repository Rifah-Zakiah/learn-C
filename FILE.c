//FILE : this is used to open/close/read/write/append a file using code and also to store inputs permanently.
#include<stdio.h>

int main(){
    FILE *fptr;
    {
    fptr = fopen("null.txt", "r");//we are trying to open this file but it does not exist.
    if (fptr == NULL)//so while reading("r"/"rb"), the pointer will store NULL.
    {//but while writing ("w"/"wb"), the pointer will itself create a new file with that name to write on it.
        printf("This file does not exist.\n");
    }else
    
        fclose(fptr);
    }
{//Reading from a file:
    fptr = fopen("test.txt","r");//to read the file in the terminal.
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character = %c.\n", ch);//Only the first character of the file will be output.
    //Without using the whole syntax of the above line we use fgetc.
    printf("character = %c.\n", fgetc(fptr));//Prints the second character of the file.
    char str[100];
    fscanf(fptr, "%s", &str);//Rest of the characters will be shown but no space can be used.
    printf("character = %s.\n", str);
    int n;
    fscanf(fptr, "%d", &n);
    printf("number = %d.\n", n);
    
    fclose(fptr);
} 
{//writing in a file:(We know in 'w'/'wb' mode the whole text of the file is deleted and then rewritten)
    fptr = fopen("test.txt","w");
    char ch='T';
    fprintf(fptr, "%c", ch);//This will delete all the contents of the file and store T.
    //Without using the whole syntax of the above line we use fputc.
    fputc('O', fptr);//puts the second character of the file as 'O'.
    char str[] = "TestFiles "; 
    fprintf(fptr, "%s", str);
//The above way of writing in the file will restore the original text of the file; to see changes feel free to play with the inputs.
    fclose(fptr);
}
{//To apend in a file:(mode 'a' helps to edit the file without deleting the previous contentsin it)
    fptr = fopen("test.txt","a"); 
    int n = 123;
    fprintf(fptr, "%d\n", n);
    fclose(fptr);
}
{//To read the whole file character by character along with the space;
    FILE *fpntr;
    fpntr = fopen("space.txt", "r");
    char ch;
    ch = fgetc(fpntr);//This line of code is not mandatory; the code runs just fine without this.
    while (ch != EOF)//EOF= End Of File: to track the end of the file;
    {
        printf("%c", ch);
        ch = fgetc(fpntr);
    }
    printf("\n");
    fclose(fpntr);
}
return 0;   
}