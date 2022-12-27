#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the Number ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

//
// 54321
// 5432
// 543
// 54
// 5



#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the Number ");
    scanf("%d",&n);
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

// 5
// 54
// 543
// 5432
// 54321


#include<stdio.h>
void main()
{
    int i,j,n;
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}


// 54321
// 4321
// 321
// 21
// 1
