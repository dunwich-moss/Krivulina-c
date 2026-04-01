#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int s=0;
    for(i = 1; i <= n; i+=2) {
        s+=i;
        
    }
    printf("%d ", s);

    printf("");
    return 0;
}
