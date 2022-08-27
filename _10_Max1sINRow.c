// 10.Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>
int maxrowindex( int a[4][4]);
int main()
{
    int a[4][4], i, j;
    printf("Enter Matrix Element:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Your Matrix is :\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Row Number %d has maximum 1's\n",maxrowindex(a));
    return 0;
}
 int maxrowindex(int a[4][4])
 {

 
    int maxIndex =-1, maxCount = 0;
    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxIndex = i;
        }
    }

    return maxIndex+1;//for ignor confusion;
}
