#include <stdio.h>
int max(int a);

// /*自动变量*/
// int main()
// {
//     int m;
//     m=max(2);
//     printf("第一次调用m=%d",m);//20
//     m=max(3);
//     printf("第二次调用m=%d",m); //30
//     return ;
// }

// int max(int a)
// {
//     int t=10;
//     t=t*a;
//     return t;
// }

/*静态局部变量*/
int main()
{
    int m;
    m=max(2);
    printf("第一次调用m=%d",m);//20
    m=max(3);
    printf("第二次调用m=%d",m); //60////故而当第二次调用时t=20
    return ;
}

int max(int a)
{
    static int t=10;////静态局部变量只执行1次
    t=t*a;
    return t;
}