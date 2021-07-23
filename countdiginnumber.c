/*
124522532
5

5 occurs 2 times
*/
#include<stdio.h>
int main()
{
    int n,k,dig,count=0;
    scanf("%d %d",&n,&k);
    while(n)
    {
        dig=n%10;
        if(dig==k)
            count++;
        n/=10;
    }
    printf("%d",count);
}