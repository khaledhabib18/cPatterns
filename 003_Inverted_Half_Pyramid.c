#include <stdio.h> 
int num = 0;
int main()
{
    printf("Enter the number of Rows "); 
    scanf("%d",&num);
    for (int i = num ; i > 0 ; i--)
    {
        for (int j =i ; j > 0 ; j--)
        {
            printf("*"); 
        }
        printf("\n");
    }
    return 0;
}