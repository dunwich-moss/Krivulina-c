#include <stdio.h>
int main(){
    int g = 10, *gpt = &g, **ptr=&gpt;
    **ptr = 5;
    printf("%d", g);
}