#include <stdio.h>
int main(){
    int g=0, p=4, *gpt=&g, *ptr=&p;
    if(gpt==ptr) printf("yes");
    else printf("no");

}