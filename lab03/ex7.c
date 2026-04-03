#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    int n, i, max_i = 0;
    printf("vvedite colichestvo students:\n");
    scanf("%d", &n);
    struct Student *s = malloc(n * sizeof(struct Student));
    
    for(i = 0; i < n; i++) {
        printf("vvedite name and age\n");
        scanf("%s %d", s[i].name, &s[i].age);
        if(s[i].age > s[max_i].age){
            max_i = i;
        }
    }
    
    for(i = 0; i < n; i++){
        printf("%s %d\n", s[i].name, s[i].age);
    }
    printf("%s %d\n", s[max_i].name, s[max_i].age);
    
    free(s);
}