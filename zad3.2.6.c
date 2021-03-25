#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,b;
    int *w = &b;
    printf("podaj liczbe: ");
    scanf("%d", &n);

    wsk(n, w);

    return 0;
}

void wsk(int n, int *w){
    *w = n;
    printf("%d", *w);
}
