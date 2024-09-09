#include <stdio.h> 
int num = 0;
int main()
{
    printf("Enter the number of Rows "); 
    scanf("%d",&num);
    for (int i = 1 ; i <= num ; i++)
    {
        for (int j =1 ; j <= i ; j++)
        {
            printf("*"); 
        }
        printf("\n");
    }
    return 0;
}