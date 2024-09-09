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
            if ((i==1) || (i==num) || (j==i) || (j==1))
            {
                printf("*"); 
            }
            else 
            {
                printf(" "); 
            }
        }
        printf("\n");
    }
    return 0;
}