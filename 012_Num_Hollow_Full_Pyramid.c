#include <stdio.h> 
unsigned int num=0;
int k=0;
int main(void)
{
    printf("Enter the number :  ");
    scanf("%d",&num);
    for (int i=1; i<=num ; i++)
    {
        if (i != num)
        {
            for (int j = i; j < num; j++)
            {
                printf(" ");
            }
            for (k = i; k < (2 * i - 1); k++) {
                if (k==i)
                {
                    printf("%i",1);
                }
                else
                {
                    printf(" ");
                }
            }
            for ( ; k>=i ; k--)
            {
                if (k==i)
                {
                    printf("%i",k);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        else if (i ==num)
        {
            for (int s=1; s <=num ; s++)
            {
                printf("%i ",s);
            }
        }
    }
    return 0;
}