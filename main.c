#include <stdio.h>
struct student
{
    char num[10];
    char name[21];
    int age;
    long score;
}st1={"01111","法克鱿",12,299},st2
                           ,*p,*q;
int main()
{
    p=&st1;  q=&st2;
    *q=*p;////与数组不同的是相同类型的结
            ////构体可整体赋值
    printf("学号\t姓名\t年龄\t分数\t\n");
    printf("%s\t%s\t%d\t%ld\t\n",st2.num
           ,st2.name,st2.age,st2.score);
    return 0;
}