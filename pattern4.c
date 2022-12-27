#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            printf("%d",j);
        else
        printf(" ");
        }
    printf("\n");
    }
}


//     5
//    45
//   345
//  2345
// 12345