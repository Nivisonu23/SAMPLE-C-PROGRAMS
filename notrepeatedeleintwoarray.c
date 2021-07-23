#include<stdio.h>
int main()
{
    int n,m,l,i,j,a[100],b[100],res[100],freq[101],flag;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		res[i]=a[i];
	}
	l=i;
    for(i=0;i<m;i++)
	{
	    scanf("%d",&b[i]);
	    res[l]=b[i];
		l++;
	}
	for(i=0;i<9;i++)
		freq[i]=0;
	for(i=0;i<l;i++)
		freq[res[i]]++;
	flag=1;
	for(i=0;i<l;i++)
	{
		if(!(freq[res[i]]>1))
		{
			printf("%d ",res[i]);
			flag=0;
		}
	}
	if(flag)
	    printf("All are repeated");
}