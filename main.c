/*从键盘输入12个整数，存入3行4列数组，分行输出所有元素。要求使用指针数组间接引用二维数组的元素*/
#include <stdio.h>
int p[3][4],i,j;
int *a[3]={p[0],p[1],p[2]};//int *a[3]={&p[0][0] &p[1][0] &p[2][0]}

int main()
{
    printf("输入12个数：");
    for(j=0;j<3;j++)
        for(i=0;i<4;i++)
            scanf("%d",a[j]+i);//scanf("%d",&(a[j]+i))
    for(j=0;j<3;j++)
    {
        for(i=0;i<4;i++)
            printf("%d  ",*(a[j]+i));
        printf("\n");
    }
    return ;
}
