#include <stdio.h>
int main(){
    int n=0, *ner=&n;
    //ner = NULL;
    if(ner==NULL) printf("yes");
    else printf("no");
    printf("%p", ner);
}