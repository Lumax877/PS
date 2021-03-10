#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;
    printf("Podaj granice dolna a potem gorna: ");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        printf("Granica gorna mniejsza od dolnej");
        return 0;
    }

    for(int i = a; i <= b; i++){
        printf("%d | %d | %d\n", i, i * i, i * i * i);

    }
    return 0;