#include <stdio.h>

int main() {
    FILE *file;
    int num1 = 42, num2 = 123;
    char text1[] = "Hello", text2[] = "World";
    
    
    file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }
    
    fprintf(file, "%d %s\n", num1, text1);
    fprintf(file, "%d %s\n", num2, text2);
    
    fclose(file);
    
    
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }
    
    int n1, n2;
    char t1[20], t2[20];
    
    fscanf(file, "%d %s", &n1, t1);
    fscanf(file, "%d %s", &n2, t2);
    
    printf("%d %s\n", n1, t1);
    printf("%d %s\n", n2, t2);
    
    fclose(file);
    return 0;
}