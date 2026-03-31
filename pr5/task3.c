#include <stdio.h>
int main(){

    char str[]="smile";
    char *ptr=str;

    while(*ptr){
        ptr++;
    }
    while(ptr>str){
        ptr--;
        printf("%c", *ptr);
    }

    return 0;

}