//printing patterns through nested loops:
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%d ", i);
            }
            printf("\n");
        }
    }
    printf("\n");
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    printf("\n");
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%c ", j + 'A' );
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%c ", i + 'A' );
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for (int i = 1; i <= n; i++) //for(int i = n; i >= 1; i--)  -->Same output will be found
        {
            for (int j = n; j >= 1; j--)
            {
                printf("%d ", j);
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for(int i = n; i >= 1; i--)
        {
            for (int j = n; j >= 1; j--)
            {
                printf("%d ", i);
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        } 
    }
    printf("\n");
   {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", i);
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%c ", j + 'A');
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%c ", i + 'A');
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for(int i = n; i >= 1; i--)
        {
            for (int j = n; j >= i; j--)
            {
                printf("%d ", j);
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for(int i = n; i >= 1; i--)
        {
            for (int j = n; j >= i; j--)
            {
                printf("%d ", i);
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for (int i = 1; i <= n; i++) 
        {
            for (int j = n; j >= i; j--)
            {
                printf("%d ", j);
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for (int i = 1; i <= n; i++) //for(int i = n; i >= 1; i--)  -->Same output will be found
        {
            for (int j = n; j >= i; j--)
            {
                printf("%d ", i);
            }
            printf("\n");
        } 
    }
    printf("\n");
    {
        for (int i = 1; i <= n; i++) //for(int i = n; i >= 1; i--)  -->Same output will be found
        {
            for (int j = n; j >= i; j--)
            {
                printf("* ");
            }
            printf("\n");
        } 
    }
    printf("\n");

}