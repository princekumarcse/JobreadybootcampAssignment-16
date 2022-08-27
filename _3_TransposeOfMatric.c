//3.Write a program in C to find the transpose of a given matrix. 
#include<stdio.h>
int main()
{
    int a[2][3],i,j;
    printf("Enter Matrix Elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Matrix is :\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose Of Give Matrix is :\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<2;i++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}