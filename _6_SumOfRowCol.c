//6.Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sumr,sumc;
    printf("Enter Matrix Element:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");     
    }
    for(i=0;i<3;i++)
    {
        sumr=0;
        for(j=0;j<3;j++)
        {
            sumr=sumr+a[i][j];
        }
        printf("Sum of %d Row is:%d\n",i,sumr);
    }
    for(j=0;j<3;j++)
    {
        sumr=0;
        for(i=0;i<3;i++)
        {
            sumr=sumr+a[i][j];
        }
        printf("Sum of %d col is: %d\n",j,sumr);
    }

    return 0;
}