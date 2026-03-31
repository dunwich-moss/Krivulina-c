#include <stdio.h>
void chet(int x){
    if(x%2==0){
        printf("yep");
    }
    else printf("nope");
}
int main(){
    int a;
    scanf("%d", &a);
    chet(a);
}