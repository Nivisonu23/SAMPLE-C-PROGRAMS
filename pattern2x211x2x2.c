#include <stdio.h>

int main()
{
    int n,x,i,j;
    scanf("%d",&n);
    x=n/2;
    printf("\n");
    for(i=x;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j!=i)
                printf("%d * ",i);
            else
                printf("%d",i);
        }
        printf("\n");
    }
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j!=i)
                printf("%d * ",i);
            else
                printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
