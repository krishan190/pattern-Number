#include<stdio.h>
void main()
{
    int i,j,n;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",2*j+1);
        }
        printf("\n");
    }
}


// 1
// 13
// 135
// 1357
// 13579

#include<stdio.h>
void main()
{
    int i,j,k,n;
    for(i=1;i<=5;i++)
    { 
        k=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k=k+2;
        }
        printf("\n");
    }
}