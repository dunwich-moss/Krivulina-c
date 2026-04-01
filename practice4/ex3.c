#include <stdio.h>
int main(){
    int k, p=4, g=10, *ptr, *gpt;
    ptr = &p;
    gpt = &g;
    k = *ptr;
    *ptr = *gpt;
    *gpt = k;



    printf("%d %d", p, g);

} 