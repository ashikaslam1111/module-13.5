#include<stdio.h>
int main()
{
    int con,vow;
    char s1[]="aeiodhfvb";
    int l=0,i=0;
    while(s1[i]!='\0')
    {
        l++;
        i++;
    }
    for(i=0; i<=l; i++)
    {
        if(s1[i]>='a'&&s1[i]<='z')
        {
            if(s1[i]=='a'|| s1[i]=='e'|| s1[i]=='i'||s1[i]=='o'|| s1[i]=='u')
            {
                vow++;
            }
            else
            {
                con++;
            }
        }
    }
    printf("%d and %d",vow,con);
    return 0;
}
