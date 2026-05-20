#include <stdio.h>

typedef int (*BinOp)(int, int);

int add(int a, int b){ return a + b; }
int sub(int a, int b){ return a - b; }
int mul(int a, int b){ return a * b; }

int compute(int a, int b, void* func){
    if(func == "add") return add(a, b);
    else if(func == "sub") return sub(a, b);
    else if(func == "mul") return mul(a, b);
    else if(func == NULL) 
        printf("Null pointer\n"); return -1;
}

int main(){
    int a = 10, b = 5;

    printf("%d\n", compute(a, b, add));
    printf("%d\n", compute(a, b, sub));
    printf("%d\n", compute(a, b, mul));
    printf("%d\n", compute(a, b, NULL));

    return 0;
}
