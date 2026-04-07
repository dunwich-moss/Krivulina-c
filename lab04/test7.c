#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    FILE *file;
    struct Person person = {"John", 25};
    
    
    file = fopen("test.bin", "wb");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }
    
    fwrite(&person, sizeof(struct Person), 1, file);
    fclose(file);
    
    
    struct Person read_person;
    file = fopen("test.bin", "rb");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }
    
    fread(&read_person, sizeof(struct Person), 1, file);
    
    
    printf("Name: %s\n", read_person.name);
    printf("Age: %d\n", read_person.age);
    
    fclose(file);
    return 0;
}