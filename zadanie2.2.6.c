#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    printf("Podaj dwie liczby, z czego conajmniej jedna nie jest zerem:\n");
    scanf("%d %d", &n, &m);
    printf("Wynik: %d", pot(n, m));
    return 0;
}

int pot(int n, int m){
    if(n == 0 && m == 0){
        printf("Błąd\n");
        return -1;
    }
    if(n < 0 || m < 0){
        printf("Błąd\n");
        return -1;
    }
    int w = n;
    for(int i = 1;i < m; i++){
        w *= n;
    }
    return w;
}
