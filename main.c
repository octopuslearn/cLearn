#include <stdio.h>

int main()
{
    // char *p;////scanf中为字符数组//////而字符指针并未为字符串分配内存
    // scanf("%s",p);//////故而有错
    // printf("%s",p);
    // return ;

    // char p[20];
    // printf("请输入\n");
    // scanf("%s",p);////输入wei da//////scanf不能输入空格，否则分隔号，相当于wei  da两个字符串
    // printf("%s",p);////输出wei //////p 指第0个字符串，故而wei
    // return ;

    char a[20];
    gets(a);////输入wei da///////gets可以输入带空格的字符串
    printf("%s",a);////输出wei da
    return ;
}
