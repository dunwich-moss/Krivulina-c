#include <stdio.h>

struct student
{
    char name[40];
    int age;
    int mark;
};
int main(void){
    struct student students[] = {{"Sasha", 17, 9}, {"Mariyam", 16, 8},{"Katya", 17, 5}, {"Ruslan", 16, 6}, {"Lesya", 16, 10}};
    int n = sizeof(students)/sizeof(students[0]);
    int max = 0;
    for(int i=0; i<n; i++){
        printf("%s %d %d\n", students[i].name,students[i].age, students[i].mark );
    }
    for(int i=0; i<n; i++){
        if(students[i].mark>max){
            max = i;
        }
    }
    printf("%s", students[max].name);
    return 0;
}
