#include<stdio.h>
int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(n%2==0)
            arr[i]=1;
        else    
            arr[i]=0;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}