#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    
    if (file == NULL) {
        printf("Error: i cant open test.txt\n");
        return 1;
    }
    
    printf("File is sucsessfully open\n");
    fclose(file);
    return 0;
}