#include <stdio.h>

int main() {
    FILE *file;
    
    file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }
    
    fputs("Hello World!\n", file);
    fputs("Second line\n", file);
    fputs("End\n", file);
    
    fclose(file);
    
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }
    
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(file);
    return 0;
}