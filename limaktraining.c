#include<stdio.h>
int main()
{
   int n,k,ans,t1;
   scanf("%d %d",&n,&k);
   ans=240-k;
   for(int i=1;i<=n;i++)
   {
       ans-=(i*5);
       if(ans<0)
       {
           t1=i-1;
           break;
       }
   }
   if(ans>=0)
   {
   printf("%d",n);
   }
   else 
   {
   printf("%d",t1);
   }

return 0;
}
