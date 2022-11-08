#include<stdio.h>
int main()
{
    int i,r,j;
    int a[3][3];
    int vr,vc;
    printf("how many rook u wanna keep?>");
    scanf("%d",&r);
    for(i=0; i<r; i++)
    {
        scanf("%d%d",&vr,&vc);
        a[vr-1][vc-1]=1;
    }
    printf("thise rooms are empty\n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            if(a[i][j]==1)
            {
                continue;
            }
            else
            {
                printf("%d %d",i+1,j+1);
                printf("\n");
            }
        }
    }

    return 0;
}
