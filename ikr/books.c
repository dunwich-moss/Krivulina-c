#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char name[50];
    char author[50];
    int year;
    int cena;
};

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("error\n");
        return 1;
    }
    
    
    struct Book* library = (struct Book*)malloc(n * sizeof(struct Book));
    if (library == NULL) {
        printf("error\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
    
        fgets(library[i].name, sizeof(library[i].name), stdin);
        library[i].name[strcspn(library[i].name, "\n")] = 0;
        
        fgets(library[i].author, sizeof(library[i].author), stdin);
        library[i].author[strcspn(library[i].author, "\n")] = 0;
        
        scanf("%d", &library[i].year);
        scanf("%d", &library[i].cena);
        getchar(); 
    }
    
    printf("\nlibrary:\n");
    for (int j = 0; j < n; j++) {
        printf("Name: %s | Author: %s | Year: %d | Cena: %d\n",
               library[j].name, library[j].author, library[j].year, library[j].cena);
    }
    
    free(library);
    return 0;
}