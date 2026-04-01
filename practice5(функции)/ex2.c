#include <stdio.h>
#include <string.h>

void perever(char str[]){
    char *ptr = str;
    for (*ptr; *ptr!='\0'; ptr++ ){
        if (*ptr==' ') break;
    }
    for(*ptr; *ptr!='\0'; ptr++){
        printf("%c", *ptr);
    }
    printf(" ");
    ptr=str;
    for(*ptr; *ptr!='\0'; ptr++ ){
        if (*ptr==' ') break;
        printf("%c",*ptr);
    }
}
int main(){
    char str1[]="hello world open home";
    perever(str1);
}