#include <stdio.h>
int main(){
    int p=10, **gpt, *ptr=&p;
    gpt = &ptr;
    printf("%d", **gpt);


    
}