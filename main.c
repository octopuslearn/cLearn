#include <stdio.h>
/*阶乘*/
struct student
{
    char num[10];
    char name[21];
    int age;
    long score;
}st;
// struct student st;

int main()
{
    printf("学号\t姓名\t年龄\t分数\t\n");
    // strcpy(st.num,"100007");////数组名是首地址，是指针常量，不能赋值。故而使用strcpy函数
    // strcpy(st.name,"法克鱿");
    scanf("%s%s",&st.num,&st.name);
    scanf("%d %ld",&st.age,&st.score);
    printf("%s\t%s\t%d\t%ld\t\n",st.num,st.name,st.age,st.score);
    return 0;
}