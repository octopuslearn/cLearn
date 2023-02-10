
#include <stdio.h>
int *a[3]={"伟大的","章鱼","万岁"};//a[0]指向“伟大的”首地址

int main()
{
    puts(a[0]);//输出a[0]所指向的字符串
    puts(a[1]);
    puts(a[2]);
    return ;
}
