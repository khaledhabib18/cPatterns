#include <stdio.h> 
int num = 0;
int cols = 0;
int main()
{
    printf("Enter the number of rows "); 
    scanf("%d",&num);
    cols = 2*num-1;
    for (int i = 1; i <= num; i++) {
        for (int j = i; j < num; j++) { // j = 1 
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}