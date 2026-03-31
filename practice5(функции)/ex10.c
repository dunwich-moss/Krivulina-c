#include <stdio.h>
void cal(int a, int b, int *sum, int *mul){
    *sum=a+b;
    *mul=a*b;
    printf("%d %d", *sum, *mul);

}
int main(){
    int a1=16;
    int b1=22;
    int sum1;
    int mul1;
    cal(a1,b1,&sum1,&mul1);
}