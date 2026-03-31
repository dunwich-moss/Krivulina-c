#include <stdio.h>

int main() {
    int calc=0, summ = 0, val, n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &val);
        arr[i]=val;
    }
    for(i=0;i<n;i++){
        if (arr[i]<0){
            summ+=arr[i];
            calc+=1;
        }
    }
    printf("%d %d", calc, summ);
    return 0;
}    