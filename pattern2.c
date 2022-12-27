#include <stdio.h>

int main()
{
    int i, j;
    int n = 5;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= i)
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }
}

// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>
void main()
{
    int i, j, n;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}

// 1
// 22
// 333
// 4444
// 55555

#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

// 1
// 21
// 321
// 4321
// 54321
