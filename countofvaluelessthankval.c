#include<stdio.h>
int main()
{
	int n,a[100],ls,c=0,i;
	scanf("%d",&n);	//5
	for(i=0;i<n;i++)
	scanf("%d",&a[i]); //1 2 4 7 9
	scanf("%d",&ls);   // 4
	for(i=0;i<n;i++)
	{
		if(a[i]<ls)		// 1 2
			c++;		//2
	}
	printf("%d",c);
	return 0;
}

