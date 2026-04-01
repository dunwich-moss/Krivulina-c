#include <stdio.h>
int main() {
    int n, i, val, calc=0;
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", val);
        arr[i]=val;
    }
    for(i=0; i<n; i++){
        if(arr[i]<0);
            calc+=1;
    
    }
    if (calc>0){
        printf("yes");
    if (calc=0){
        printf("no");
    }
    }
    return 0;
}