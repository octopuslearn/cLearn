
#include <stdio.h>

int main()
{
    int a=1,b=2,*m,*n;
    m=&a;
    n=&b;
    *m=10;
    *n=20;
    printf("a=%d b=%d",a,b);//a=10,b=20
    return 0 ;              //变量的间接引用
}                           //通过指针变量对
                        //另一个变量进行引用