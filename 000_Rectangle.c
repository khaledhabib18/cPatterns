#include <stdio.h> 
int rows = 0 ; 
int cols = 0 ;
int main()
{
    printf("enter the number of rows ");
    scanf("%d",&rows); 
    printf("enter the number of columns ");
    scanf("%d",&cols); 
    for (int i = 0 ; i < rows ; i++ )
    {
        for (int j = 0 ; j < cols ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}