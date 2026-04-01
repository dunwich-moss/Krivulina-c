#include <stdio.h>
int square(int x){
    printf("%d", x*x);
}
int main(){
    int a;
    scanf("%d", &a);
    square(a);
}