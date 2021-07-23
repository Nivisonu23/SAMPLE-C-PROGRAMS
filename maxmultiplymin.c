#include<stdio.h>
int maxminprod(int n1,int n2,int n3)
{
   int max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
   int min = (n1 < n2) ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);
   printf("%d",max*min);
}
int main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    maxminprod(n1,n2,n3);
}