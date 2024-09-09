#include <stdio.h> 
int num = 0;
int cols = 0;
int main()
{
    printf("Enter the number of rows "); 
    scanf("%d",&num);
    cols = 2*num-1;
    for (int i = 1 ; i <= num ; i++)
    {
        for (int j = 1 ; j <= (cols-i)/2 ; j++)
        {
            printf(" ");
        } 
        for (int j = 1 ; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}