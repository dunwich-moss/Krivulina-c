#include <stdio.h>
int main(){
    int n=5, *ner=&n;
    printf("%zu", sizeof(ner));
}