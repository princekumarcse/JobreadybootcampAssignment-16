// 9.Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>
int main()
{
    int a[3][3], i, j, count=0;
    printf("Enter Matrix Element:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    printf("The Matrix is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    if (count >=5)
        printf("Its A Sparse Matrix:");
    else
    printf("Its Not a Sparse Matrix:\n");
    return 0;
}