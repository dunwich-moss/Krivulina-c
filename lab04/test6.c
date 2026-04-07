#include <stdio.h>

int main() {
    FILE *file;
    int numbers[5] = {10, 20, 30, 40, 50};
    
    
    file = fopen("test.bin", "wb");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }
    
    fwrite(numbers, sizeof(int), 5, file);
    fclose(file);
    
    
    int read_numbers[5];
    file = fopen("test.bin", "rb");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }
    
    fread(read_numbers, sizeof(int), 5, file);
    
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", read_numbers[i]);
    }
    printf("\n");
    
    fclose(file);
    return 0;
}