#include<stdio.h>
int fib(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int ans=fib(n);
    printf("%d",ans);
    return 0;                  
}
int fib(int n)
{
    if(n<=1)
        return 1;
    else
    {
        int a=fib(n-1);
        int b=fib(n-2);
        return a+b;
    }
}