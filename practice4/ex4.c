#include <stdio.h>
int main(){
    int n = 4, *ner;
    ner = &n;
    printf("%p", ner);
}