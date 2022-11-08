#include<stdio.h>
int main()
{
    int i,l;
    char s1[]="madam";
    char s2[100];
    i=0;
    int x=1;
    while(s1[i]!='\0')
    {
        l++;
        i++;
    }
    int j=0;
    for(i=l-1; i>=0; i--)
    {
        s2[j]=s1[i];
        j++;
    }
    for(i=0; i<l; i++)
    {
        if(s1[i]!=s2[i])
        {
            x=0;
        }

    }
    if(x!=0)
    {
        printf("y");
    }
    else
    {
        printf("n");
    }
    return 0;
}













