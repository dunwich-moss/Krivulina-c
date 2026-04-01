#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

#define TYPE_INT    1
#define TYPE_FLOAT  2
#define TYPE_CHAR   3

struct TypedData {
    union Data value;
    int type;
};

void printTypedData(struct TypedData* td) {
    printf("Type: %d, ", td->type);
    switch(td->type) {
        case TYPE_INT:
            printf("int = %d\n", td->value.i);
            break;
        case TYPE_FLOAT:
            printf("float = %.2f\n", td->value.f);
            break;
        case TYPE_CHAR:
            printf("char = '%c' (code: %d)\n", td->value.c, (int)td->value.c);
            break;
        default:
            printf("unknown type\n");
    }
}

int main() {
    struct TypedData data1 = {{0}, TYPE_INT};
    data1.value.i = 42;
    printTypedData(&data1);
    
    struct TypedData data2 = {{0}, TYPE_FLOAT};
    data2.value.f = 3.14159f;
    printTypedData(&data2);
    
    struct TypedData data3 = {{0}, TYPE_CHAR};
    data3.value.c = 'X';
    printTypedData(&data3);
    
    printf("\nSize of union Data: %zu byte\n", sizeof(union Data));
    printf("Size of struct TypedData: %zu byte\n", sizeof(struct TypedData));
    
    return 0;
}