/*结构体指针指向结构体变量的成员名*/

/*方法一(*p).age*/
// #include <stdio.h>
// struct student
// {
//     char num[10];
//     char name[21];
//     int age;
//     long score;
// }str1,*p=&str1;

// int main()
// {   
//     printf("请输入学号、姓名、年龄、分数\n");
//     scanf("%s\n%s\n%d\t%ld",&(*p).num,////(*p).score等同于str1.score
//         &(*p).name,&(*p).age,&(*p).score);
//     printf("学号\t姓名\t年龄\t分数\t\n");
//     printf("%s\t%s\t%d\t%ld\t\n",(*p).num
//            ,(*p).name,(*p).age,(*p).score);
//     return 0;
// }


/*方法二p->age*/
struct student
{
    char num[10];
    char name[21];
    int age;
    long score;
}st1,*p=&st1;

int main()
{   
    printf("请输入学号、姓名、年龄、分数\n");
    scanf("%s\n%s\n%d\t%ld",&p->num,
        &p->name,&p->age,&p->score);////p->age 等同于 (*p).age
    printf("学号\t姓名\t年龄\t分数\t\n");
    printf("%s\t%s\t%d\t%ld\t\n",p->num
           ,p->name,p->age,p->score);
    return 0;
}