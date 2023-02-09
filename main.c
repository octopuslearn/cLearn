/*整数的分解    输入一个任意位数的整数，按位数从高到低输出*/
#include <stdio.h>

int a[20],i,j;
long x;
int main()
{
    printf("输入任意位数整数：\r\n");
    scanf("%ld",&x);
    i=0;
    while(x!=0)
    {
        a[i]=x%10;
        // printf("%d",a[i]);//从低到高 输入123 输出321
        x=x/10;
        i++;
    }    
        // printf("%d",i);//查看此时i
        // printf("%d\r\n",a[i]);//此时i相应的数组元素
        for(i=i-1;i>=0;i--)
        {
            // printf("%d",i);//此时的i
            printf("%d\r\n",a[i]);//从高到低 输入123 输出123
        }
    return 0 ;
}