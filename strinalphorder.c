#include<stdio.h>
#include<string.h>

int main()
{
    char s[]="programming",temp;
    int i,j,n;
    n=strlen(s);
    for (i = 0 ; i < n-1 ; i++)
    {
        for (j = i+1; j < n ; j++)
        {
            if (s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
            
        }
    }
    printf("%s ",s);
    return 0;
}