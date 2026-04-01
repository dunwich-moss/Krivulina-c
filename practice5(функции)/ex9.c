#include <stdio.h>
void max2(int a, int b, int *res){
    if(a>=b) *res=a;
    if (b>a) *res=b;
    printf("%d", *res);
}
int main(){
    int a1=10;
    int b1=22;
    int ptr;
    max2(a1, b1, &ptr);
}