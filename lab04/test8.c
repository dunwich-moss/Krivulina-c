#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    FILE *file;
    struct Person people[3] = {
        {"John", 25},
        {"Anna", 30},
        {"Mike", 22}
    };
    

    file = fopen("test.bin", "wb");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }
    
    fwrite(people, sizeof(struct Person), 3, file);
    fclose(file);
    
    
    struct Person read_people[3];
    file = fopen("test.bin", "rb");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }
    
    fread(read_people, sizeof(struct Person), 3, file);
    
    
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d\n", read_people[i].name, read_people[i].age);
    }
    
    fclose(file);
    return 0;
}