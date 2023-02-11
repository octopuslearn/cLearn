#include <stdio.h>
int max(int a,int b);

int main()
{
    int c,d,m;
    printf("请输入两个整数：\n");
    scanf("%d%d",&c,&d);
    m=max(c,d);
    printf("m=%d",m);
    return ;
}

int max(int a,int b)
{
    int t;
    if(a>b) t=a;
    else  t=b;
    return t;
}