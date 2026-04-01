#include <stdio.h>
int sum(int a, int b){
    int sum1;
    sum1= a+b;
    printf("%d%d", a,b);
}
int main(){
    int a1;
    int b1;
    scanf("%d", &a1);
    scanf("%d", &b1);
    sum(a1,b1);
}