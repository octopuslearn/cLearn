
/*输入三个数存入数组，并将第一个元素扩大十倍输出*/
void swap(int *p);
int main()
{
    int a[3],i;
    printf("写入3个整数：\n");
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    swap(a);
    printf("整个元素：\n");
    for(i=0;i<3;i++)
        printf("%d ",a[i]);
    return 0;
}
void swap(int *p)
{
    int i;
    for(i=0;i<3;i++)
         *(p+i)=*(p+i)*10;
    return ;
}