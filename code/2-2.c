#include <stdio.h>

enum Color{ RED, GREEN, BLUE };

enum Status{ OK = 0, ERROR = -1, BUSY = 1 };

int main(){
    printf("RED   = %d\n", RED);
    printf("GREEN = %d\n", GREEN);
    printf("BLUE  = %d\n", BLUE);

    printf("OK    = %d\n", OK);
    printf("ERROR = %d\n", ERROR);
    printf("BUSY  = %d\n", BUSY);
    return 0;
}
