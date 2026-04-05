#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];
    
    
    file = fopen("test.txt", "w");
    fputs("Line 1\nLine 2\nLine 3\n", file);
    fclose(file);
    
    
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    
    printf("Reading file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    
    
    if (feof(file)) {
        printf("End of file reached\n");
    }
    
    
    if (ferror(file)) {
        printf("Read error occurred\n");
    } else {
        printf("No read errors\n");
    }
    
    fclose(file);
    return 0;
}