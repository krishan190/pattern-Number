#include <stdio.h>
void main()
{
    int i, j, E = 2, Od = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf(" %d ", E);
                E = E + 2;
            }
            else
            {
                printf(" %d ", Od);
                Od = Od + 2;
            }
        }
        printf("\n");
    }
}



// 1 
// 2  4 
// 3  5  7 
// 6  8  10  12 
// 9  11  13  15  17 
