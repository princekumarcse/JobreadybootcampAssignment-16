//4.Write a program in C to find the sum of right diagonals of a matrix. 
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum;
    printf("Enter Matrix Elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 
    printf("The matrix is:\n"); 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of Right Diagonal is:\n");
     sum=a[0][0]+a[1][1]+a[2][2];
     printf("%d",sum);
    return 0;     
}