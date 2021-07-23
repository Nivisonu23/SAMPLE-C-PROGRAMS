#include<stdio.h>
int equal(int a[],int b[],int n,int m);
int main()
{
	int a[50],b[50],n,m,i,j,t1=0,t2=0;
	scanf("%d %d",&n,&m);
	if(n!=m)
		printf("Not Eqaul");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	if(equal(a,b,n,m))
		printf("EQUAL");
	else
		printf("NOT EQUAL");
	return 0;
}
// equal or not
int equal(int a[], int b[],int n,int m)
{
	int i,t1,t2,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[i+1])
			{
				t1=a[i]; a[i]=a[j];	a[j]=t2;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(b[i]>b[i+1])
			{
				t2=b[i]; b[i]=b[j];	b[j]=t2;
			}
		}
	}
	for(i=0;i<n;i++)
		if(a[i]==b[i])
			return 1;
		return 0;
}
