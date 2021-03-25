#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("%p", tak());
    return 0;
}

int tak(){
    double b;
    double *wskaznik;
    wskaznik = (double*) malloc(sizeof(*wskaznik));

    return wskaznik;
}
