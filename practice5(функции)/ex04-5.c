#include <stdio.h>

int max(){
    int n;
    scanf("%d", &n);
    int a;
    scanf("%d", &a);
    int max1 = a;
    int b;
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if (a>max1) max1=a;
    }
    printf("%d", max1);

}
int main(){
    max();
}