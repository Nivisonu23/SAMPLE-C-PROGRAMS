#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   
    // char s[] = "10.0.0.0";
    int ip1[] = {10,0,0,0};
    int ip2[] = {10,0,0,50};
    // char s2[] = "10.0.0.50";
    long long count=0;
	int i;
  	for(i=0;i<4;i++)
    {
       if(i==0)
           count+= (255*255*255*(ip2[i]-ip1[i]) + (ip2[i]-ip1[i]));
       if(i==1)
           count+= (255*255*(ip2[i]-ip1[i])+ (ip2[i]-ip1[i]) );
       if(i==2)
           count+= (255*(ip2[i]-ip1[i]) + (ip2[i]-ip1[i]));
       if(i==3)
           count+= (ip2[i]-ip1[i]);
    }
   printf("%d",count);
   return 0;
}
