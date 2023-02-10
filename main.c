#include <stdio.h>
int p[3][4],i,j;
int (*a)[4];//行指针，4-每行4列

int main()
{
    a=p;////必须将行指针指向二维数组0行
    printf("输入12个数：\n");
    for(j=0;j<3;j++)
        for(i=0;i<4;i++)    
            scanf("%d",*(a+j)+i);//&*(*(a+j)+i)
            // scanf("%d",&a[j][i]);
    for(j=0;j<3;j++)
    {
        for(i=0;i<4;i++)
            printf("%d  ",*(*(a+j)+i));
            // printf("%d  ",a[j][i]);
        printf("\n");
    }
    return ;
}
