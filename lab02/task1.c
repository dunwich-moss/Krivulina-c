#include <stdio.h>

struct student
{
    char name[60];
    int mark;
    int age;
};
 int main(void){
    struct student college = {};
    printf("Enter name:");
    scanf("%s", college.name);
    printf("Enter mark:");
    scanf("%d", &college.mark);
    printf("Enter age:" );
    scanf("%d", &college.age);
    printf("Name:%s \n Mark:%d \n Age: %d",  college.name, college.mark, college.age);
    return 0;
 }