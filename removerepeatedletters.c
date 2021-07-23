#include<stdio.h>
#include<string.h>

int main()
{
    char s[]="hello how are you";
    int i,j,k;
    for(i=0;i<strlen(s);i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[j]==s[i])
            {
                for(k=j;s[k]!='\0';k++)
                {
                    s[k]=s[k+1];
                }
            }
        }
    }
    printf("%s",s);
    return 0;
}