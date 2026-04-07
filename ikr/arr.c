#include <stdio.h>

int main(){

    int arr1[5]={2,-3,7,1,10};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr1[j] > arr1[j + 1]) {
            
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
    for(int k=0; k<5;k++){
        printf("%d ", arr1[k]);
    }

}
