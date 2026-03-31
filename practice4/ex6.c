#include <stdio.h>
int main(){
    int p=10, *ptr = &p, *gpt;
    gpt = ptr;
    printf("%d\n", p);
    printf("%p %p ", gpt, ptr);
}