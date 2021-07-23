#include<stdio.h>
int main()
{
int n,a[100],i,j,m,temp;
printf("Enter the number of elements:");
    scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("Enter the Mth Value:");
    scanf("%d",&m);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i] > a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("Mth Largest Element is : %d\n",a[n-m]);
printf("Mth Smallest Element is : %d",a[m-1]);
return 0;
}