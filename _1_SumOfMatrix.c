//1.Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter First Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter Second Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&b[i][j]);
        }
        
    }
   printf("First Matrix is:\n");
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     printf("Second Matrix is:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d\t",b[i][j]);
        }
        printf("\n");
        
    }
     printf("Sum  Matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
          printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}