#include <stdio.h>
int main(){
    char str[]="hello";
    char *ptr;
    ptr = str;
    while(*ptr) printf("%c\n", *ptr), ptr++;

}