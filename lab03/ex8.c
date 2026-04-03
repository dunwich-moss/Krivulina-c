#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int *arr = NULL;
    int size = 0, cap = 0, choice, val, idx;
    
    while(1) {
        printf("1-добавить 2-удалить 3-вывод 0-выход\n");
        scanf("%d", &choice);
        
        if(choice == 0) {
            break;
        }
        if(choice == 1) {
            scanf("%d", &val);
            if(size == cap) {
                if(cap) {
                    cap = cap * 2;
                } else {
                    cap = 4;
                }
                arr = realloc(arr, cap * sizeof(int));
            }
            arr[size++] = val;
        }
        else if(choice == 2) {
            scanf("%d", &idx);
            if(idx < 0 || idx >= size) {
                continue;
            }
            for(int i = idx; i < size-1; i++) {
                arr[i] = arr[i+1];
            }
            size--;
            arr = realloc(arr, size * sizeof(int));
        }
        else if(choice == 3) {
            for(int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    }
    
    free(arr);
}