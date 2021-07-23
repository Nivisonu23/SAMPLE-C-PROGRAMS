#include<stdio.h>
#include<string.h>

int main()
{
    char s[]="How Are You",find[]="re";
    int i,j=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(find[j]=='\0')
        {
            printf("%d",i-strlen(find));
            return 0;
        }
        if(find[j]==s[i])
            j++;
        else
            j=0;
    }
    printf("-1");
    return 0;
}