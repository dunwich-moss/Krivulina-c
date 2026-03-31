#include <stdio.h>
void swap(int *a, int *b){
    
    int c = *a;
    *a=*b;
    *b = c;
    printf("%d %d", *a, *b);
}
int main(){
    int aa=1, bb=4;
    swap(&aa, &bb);

}