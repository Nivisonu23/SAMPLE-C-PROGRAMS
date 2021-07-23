#include<stdio.h>
int main()
{
	int n,a[100],i,sum;
		scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sum=0;
	for(i=0;i<n;i++)
	{
		sum+=(i*a[i]);
	}
	printf("%d\n",sum);
	return 0;
}
