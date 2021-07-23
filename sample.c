#include<stdio.h>
#include<string.h>

int c_vow(char);
int main()
{
    char s[100],t[100];
    int i,d=0;
    scanf("%[^\n]s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(c_vow(s[i])==0)
        {
            t[d]=s[i];
            d++;
        }
    }
    t[d]='\0';
    strcpy(s,t);
    printf("%s\n",s);
    return 0;
}
int c_vow(char ch)
{
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        return 1;
    else
        return 0;
}
