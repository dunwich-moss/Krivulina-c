#include <stdio.h>
#include <string.h>

void perever(char str[]) {
    char *ptr = str;
    char *end = str + strlen(str) - 1;  // конец строки
    int first = 1;  // флаг для первого слова (без пробела перед ним)
    
    while (end >= str) {
        // пропускаем пробелы с конца
        while (end >= str && *end == ' ') end--;
        if (end < str) break;
        
        // печатаем слово справа налево
        char *word_end = end;
        while (end >= str && *end != ' ') {
            printf("%c", *end);
            end--;
        }
        
        // пробел после слова (кроме первого)
        if (!first) printf(" ");
        first = 0;
    }
    for(*ptr; *ptr!='\0'; ptr++){
        printf("%c", *ptr);
    }
    
    printf("\n");
}

int main() {
    char str1[] = "how are you my friend";
    perever(str1);
    return 0;
}