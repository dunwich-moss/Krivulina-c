#include <stdio.h>

int main() {
    char str[] = "lelolylalila";
    char *gpt = str;
    char glasnie[] = "eyuioa";   
    
    // Проверяем именно символ (*gpt), а не адрес (gpt)
    while(*gpt) {
        char *gl = glasnie;
        while(*gl) { // Аналогично проверяем символ гласной
            if (*gpt == *gl) {
                *gpt = '*';
                break;               
            }
            gl++;       
        }
        gpt++;
    }
    
    printf("%s\n", str); // Ожидаемый вывод: l*l*l*l*l*l*
    return 0;
}