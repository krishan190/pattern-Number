#include <stdio.h>

int main()
{
    int i, j;
    int n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j >= 1 && j <= 6 - i)
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }
}

// 12345
// 1234
// 123
// 12
// 1

#include <stdio.h>
void main()
{
    int i, j, n;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}

// 11111
// 22222
// 33333
// 44444
// 55555


#include<stdio.h>
void main()
{
    int i,j,n;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}



// 54321
// 54321
// 54321
// 54321
// 54321
