#include <stdio.h>

int main() {
    FILE *file;
    
    file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }
    
    putc('H', file);
    putc('i', file);
    putc('!', file);
    putc('!', file);
    putc('!', file);
    putc('!', file);
    putc('\n', file);
    
    fclose(file);
    
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }
    
    int ch;
    while ((ch = getc(file)) != EOF) {
        putchar(ch);
    }
    
    fclose(file);
    return 0;
}