
#include <stdio.h>

int main() {
    char str[]="lelolylalila";
    char *gpt = str;
    char glasnie[]="eyuioa";   

    while(*gpt){
        char *gl=glasnie;
        while(*gl){
            if (*gpt==*gl){
                *gpt = '*';
                break;               
            }
            gl++;       
        }
        gpt++;
    }
    printf("%s\n", str);
    return 0;
}