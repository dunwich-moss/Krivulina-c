#include <stdio.h>
struct date{
    int day;
    int month;
    int year;
};
struct person{
    char name[40];
    struct date dob;
};
int main(void){
    struct date dates[] = {{16, 3, 2009}, {22, 7, 2002}, {2, 3, 1975}, {5, 6, 1978}};
    struct person persons[] = {{"Sasha", dates[0]}, {"Nastya", dates[1]},{"Olya", dates[2]}, {"Sergey", dates[3]} };
    int n = sizeof(persons)/sizeof(persons[0]);

    
    for(int i = 0; i<n; i++){
        printf("%s: %02d.%02d.%d\n", persons[i].name, persons[i].dob.day, persons[i].dob.month, persons[i].dob.year);
    
    }
    printf("\n\nAfter 2000");
    for(int j =0; j<n; j++ ){
        if(persons[j].dob.year >2000){
            printf("%s: %02d.%02d.%d\n", persons[j].name, persons[j].dob.day, persons[j].dob.month, persons[j].dob.year); 
        }
    }


}
