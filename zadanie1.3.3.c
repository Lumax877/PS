#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);
    printf("Podaj trzecia liczbe: ");
    scanf("%d", &c);

    if(a >= b && a >= c)
    {
        printf("Najwieksza liczba: %d", a);
    }
    if (b >= a && b >= c)
    {
        printf("Najwieksza liczba: %d", b);
    }
    if (c >= a && c >= b)
    {
        printf("Najwieksza liczba: %d", c);
    }

    return 0;
}
