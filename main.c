
#include <stdio.h>
int a[2][3],i,j;

int main()
{
    printf("输入6个整数:\n");
    for(j=0;j<2;j++)
        for(i=0;i<3;i++)
            scanf("%d",&a[j]+i);
    for(j=0;j<2;j++)
    {
        for(i=0;i<3;i++)
            printf("%d ",*(a[j]+i));
        printf("\n");
    }
}