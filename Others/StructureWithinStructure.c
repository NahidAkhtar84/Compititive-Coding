//test21
#include<stdio.h>
#include<string.h>
struct college_info{
int college_id;
char college_name[50];
};
struct student_info{
    int student_id;
    char student_name[20];
    struct college_info cinfo;
}sinfo;
int main()
{
    struct student_info sinfo={1,"kaju",234,"jdsdjshd"};
    printf("%d\n",sinfo.student_id);
    printf("%s\n",sinfo.student_name);
    printf("%s\n",sinfo.cinfo.college_name);
}
