#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b;
    printf("podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("teraz podaj druga liczbe: ");
    scanf("%d", &b);
    printf("%d + %d = %d", a, b, suma(&a, &b));

    return 0;
}

int suma(const *wska, const *wskb)
{
    int c = *wska + *wskb;
    return c;
}
