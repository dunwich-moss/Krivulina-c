#include <stdio.h>

int main() {
    FILE *file;
    long size;
    

    file = fopen("test.txt", "w");
    fputs("Hello World!\nThis is a test file.", file);
    fclose(file);
    

    file = fopen("test.txt", "rb");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    fseek(file, 0, SEEK_END);    
    size = ftell(file);          
    
    printf("File size: %ld bytes\n", size);
    
    fclose(file);
    return 0;
}