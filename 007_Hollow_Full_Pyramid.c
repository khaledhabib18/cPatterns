#include <stdio.h> 
int num = 0;
int main()
{
    printf("Enter the number of rows "); 
    scanf("%d",&num);
    for (int i = 1; i <= num; i++) {
        for (int j = i; j < num; j++) { // j = 1 
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            if ((k==1) || (k==(2 * i -1)) || (i==num))
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