#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("teraz podaj druga liczbe: ");
    scanf("%d", &b);
    zamiana(&a, &b);

    return 0;
}

void zamiana(int *wskA, int *wskB)
{
    if (*wskA > *wskB)
    {
        int pusty = *wskA;
        *wskA = *wskB;
        *wskB = pusty;

    }
printf("a: %d, b: %d", *wskA, *wskB);
}
