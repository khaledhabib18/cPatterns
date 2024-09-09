#include <stdio.h> 
unsigned int num=0;
int k=0;
int main(void)
{
    printf("Enter the number :  ");
    scanf("%d",&num);
    for (int i=1; i<=num ; i++)
    {
        for (int j = i; j < num; j++)
        {
            printf(" ");
        }
        for (k = i; k < (2 * i - 1); k++) {
            printf("%i",k);
        }
        for ( ; k>=i ; k--)
        {
            printf("%i",k);
        }
        printf("\n");
    }
    return 0;
}