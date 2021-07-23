#include<stdio.h>
#include<string.h>
int main()
{
   char str[100];
   int len=0,i,j,n;
   printf("Enter the string:");
   scanf("%s",&str);
   len=strlen(str);
   for(i=0;i<len;i++)
   {
        if(str[i]>'0' && str[i]<'9')
        {
            n=str[i]-'0';
            for(j=0;j<n;j++)
                printf("%c",str[i-1]);
        }
   }
   return 0;
}
