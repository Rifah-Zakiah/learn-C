//This file is for practicing the questions.
#include<stdio.h>
#include<string.h>
struct vector
{
    int x;
    int y;
};
int stat(){
    static int a = 5;
    a++;
    printf("%d\n", a);
}
int add(int a, int b);
void sp_to_dash(char *str);
int main(){
    int r1,r2,c1,c2;
    printf("Enter number of rows for First Matrix:\n");
    scanf("%d",&r1);
    printf("Enter number of columns for First Matrix:\n");
    scanf("%d",&c1);
    printf("Enter number of rows for Second Matrix:\n");
    scanf("%d",&r2);
    printf("Enter number of columns for Second Matrix:\n");
    scanf("%d",&c2);

    if(c1!=r2)
    {
        printf("Matrices Can't be multiplied together");
    }else
    {
        int m1[r1][c1],m2[r2][c2], mul[r1][c2];
        printf("Enter first matrix elements \n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
        printf("Enter Second matrix elements\n");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                scanf("%d",&m2[i][j]);
            }
        }
        
        
        printf("Multiplied matrix\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                mul[i][j]=0;
               for(int k=0;k<c1;k++)
                {
                    mul[i][j]+=m1[i][k]*m2[k][j];
                    
                }
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        }
        
    }




return 0;
 } 
 
 int add(int a, int b){
    a++; b++;
    return a+b;
 }
void sp_to_dash(char *str){
while(*str) {
if(*str== ' ') printf("%c", '-');
else printf("%c", *str);
str++;
}
printf("%s", *str);
 }