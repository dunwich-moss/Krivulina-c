#include <stdio.h>

int main() {
    int val, i, m[10]={0};
    
    for(i = 0; i<10; i++) {
        scanf("%d", &val);
        m[i]=val;

    }
    for(i=9; i>-1; i--){
        printf("%d", m[i]);
        printf("  ");
    }
    return 0;
}
