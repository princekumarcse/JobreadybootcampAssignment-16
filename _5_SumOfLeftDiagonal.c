//5.Write a program in C to find the sum of left diagonals of a matrix. 
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum;
    printf("Enter Matrix Element:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }   
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
    sum=a[0][2]+a[1][1]+a[2][0];
    printf(" Sum of Right Diagonal : %d",sum);
    return 0;
}