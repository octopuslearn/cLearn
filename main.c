
#include <stdio.h>
int *p[3],a,b,c;

int main()
{
    p[0]=&a;//p[0]指向a,将变量a的地址赋值给p[0]
    p[1]=&b;
    p[2]=&c;
    *p[0]=200;//p[0]所指向的变量 即a=200
    *p[1]=300;
    *p[2]=400;
    printf("%d%d%d",a,b,c);//200300400
}
