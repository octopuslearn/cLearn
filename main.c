
// /*形参传递给实参，单向的，显然m,n的值无法交换*/
//int max(int a,int b);
// void main()
// {
//     int m=2,n=3;
//     max(m,n);
//     printf("m=%d n=%d",m,n);//m=2,n=3
//     return ;
// }

// int max(int a,int b)
// {
//     int t;
//     t=a;
//     a=b;
//     b=t;
//     printf("a=%d b=%d\n",a,b);//a=3,b=2
//     return ;////返回到了max(m,n);下一行即printf("m=%d n=%d",m,n);
// }


void swap(int *p,int *q);
int main()
{
    int a=2,b=3;
    swap(&a,&b);
    printf("a=%d b=%d",a,b);//a=3,b=2
    return 0;
}

void swap(int *p,int *q)
{
    int t;////实现了跨函数引用，a,b主调函数定义 p,q被调函数定义
    t=*p;//t=a////间接引用主调函数中a,b的值
    *p=*q;//a=b
    *q=t;//b=t
    return ;
}