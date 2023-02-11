
/*输入三个数存入数组，并将第一个元素扩大十倍输出*/
void swap(int *p);
int main()
{
    int a[3],i;
    printf("写入3个整数：\n");
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    swap(&a[0]);
    printf("第一个元素：%d\n",a[0]);
    printf("整个元素：\n");
    for(i=0;i<3;i++)
        printf("%d ",a[i]);
    return 0;
}

void swap(int *p)
{
    *p=*p*10;
    return ;
}