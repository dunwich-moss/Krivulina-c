#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];
    
    
    printf("Enter text: ");
    fgets(buffer, sizeof(buffer), stdin);
    
    
    file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    fputs(buffer, file);
    fclose(file);
    
    
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(file);
    return 0;
}