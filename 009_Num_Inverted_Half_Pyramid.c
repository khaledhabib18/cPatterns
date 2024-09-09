#include <stdio.h>
unsigned int num=0;
int main(void)
{
    printf("enter the number :  ");
    scanf("%d",&num);
    for (int i =num ; i>=1 ; i--)
    {
        for(int j = 1 ; j<=i ; j++)
        {
            printf("%i",j);
        }
        printf("\n");
    }
    return 0;
}