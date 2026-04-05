#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];
    
    
    file = fopen("test.txt", "w");
    fputs("First line\nSecond line\nThird line\n", file);
    fclose(file);
    

    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    fseek(file, 10, SEEK_SET); 
    
    
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(file);
    return 0;
}