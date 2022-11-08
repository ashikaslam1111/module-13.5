#include<stdio.h>
int main()
{
    int i,j,all;
    int r,c;
    printf("enter row size>>");
    scanf("%d",&r);
    printf("enter collum size>>");
    scanf("%d",&c);
    int a[r][c];
    int b[r][c];
    printf("give your 1st matrix>>\n");
    for(i=0; i<=r-1; i++)
    {
        for(j=0; j<=c-1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("give your 2nd matrix>>\n");
    for(i=0; i<=r-1; i++)
    {
        for(j=0; j<=c-1; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("final  matrix>>\n");
    for(i=0; i<=r-1; i++)
    {
        for(j=0; j<=c-1; j++)
        {
            all=a[i][j]+b[i][j];
            printf("%d  ",all);
        }
        printf("\n");
    }
    return 0;
}
