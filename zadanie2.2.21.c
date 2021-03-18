#include <stdio.h>
#include <stdlib.h>

int an(int n){
    if(n == 0) return 1;
    return 2 * an(n - 1) + 5;
}

int main(){
    int n;
    scanf("%d", &n);
    if(n < 0){
        printf("Błąd\n");
        return -1;
    }
    printf("%d", an(n));
    return 0;
}