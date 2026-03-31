#include <stdio.h>
int main(){
    int count = 0;
    char str[] = "Sasha";
    char *ptr=str;
    while(*ptr) count++, ptr++;
    printf("%d", count);
}