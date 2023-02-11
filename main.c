
/*输入三个数存入数组，并将所有元素扩大十倍输出*/
long swap(int p);
int main()
{
    int a,b;
    printf("写入1个整数：\n");
    scanf("%d",&a);
    b=swap(a);
    printf("!%d=%ld\n",a,b);
    return 0;
}
long swap(int p)
{
    long i;
    if(p==1)
        i=1;
    else
        i=p*swap(p-1);
    return i;
}