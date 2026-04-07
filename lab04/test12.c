#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    FILE *file;
    struct Person person;
    
    printf("Enter name: ");
    fgets(person.name, sizeof(person.name), stdin);
    person.name[strcspn(person.name, "\n")] = 0;
    
    printf("Enter age: ");
    scanf("%d", &person.age);
    getchar();
    
    file = fopen("people.db", "ab");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }
    
    fwrite(&person, sizeof(struct Person), 1, file);
    fclose(file);
    
    file = fopen("people.db", "rb");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }
    
    printf("\nDatabase contents:\n");
    struct Person p;
    while (fread(&p, sizeof(struct Person), 1, file) == 1) {
        printf("Name: %s, Age: %d\n", p.name, p.age);
    }
    
    fclose(file);
    return 0;
}