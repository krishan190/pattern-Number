#include <stdio.h>
void main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i; j++)
        {
            if (j % 2 == 0)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
}

// 2 method

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", 2 * j);
        }
        printf("\n");
    }
}

// 2
// 24
// 246
// 2468
// 246810
