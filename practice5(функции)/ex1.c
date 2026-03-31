// функция возвращающая пересечение двух массивов
#include <stdio.h>
void odinakovie(int arr1[], int arr2[]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr1[i]==arr2[j]){
                printf("%d\n", arr2[j]);
            }
        }

    }   
}
int main(void){

    int a1[5]={1,2,3,4,5,};
    int a2[5]={26,77,4,1,7};
    

    odinakovie(a1, a2);

}