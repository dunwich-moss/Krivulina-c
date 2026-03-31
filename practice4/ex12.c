#include <stdio.h>
int main(){
    int summ = 0, i, p, *ptr;
    int arr[]={4,6,9,12};
    ptr=arr;
    for(i=0; i<4; i++) summ+=*ptr, ptr++;
    printf("%d", summ);

    
}