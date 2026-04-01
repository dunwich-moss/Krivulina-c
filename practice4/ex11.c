#include <stdio.h>
int main(){
    int *p, k;
    int arr[] = {10, 16, 2, 3, 5, 22, 7};
    p = arr;
    for (k=0; k<7; k++) printf("%d ", *p), p++, printf("%p\n", p);

    printf("\n");

}