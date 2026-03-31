#include <stdio.h>
int main(){
    int n=4, *ptr;
    ptr = &n;
    *ptr = 6;
    printf("%d", n);
}