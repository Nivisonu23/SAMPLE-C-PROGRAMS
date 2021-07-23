#include<stdio.h>

int main()
{
	int n,fn,sn,i,a[100];
	scanf("%d",&n);				//6
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);			//1 2 6 4 9 10
	scanf("%d",&fn);			//3
	scanf("%d",&sn);			//8
	for(i=0;i<n;i++)
	{
		if(a[i]>fn && a[i]<sn)
			printf("%d ",a[i]);	// 6 4
	}
	return 0;
}
