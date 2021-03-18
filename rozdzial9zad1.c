#include <stdio.h>
#include <stdlib.h>
double min(double, double);

int main(void){

    double x, y;
    printf("Podaj dwie liczby: \n");
    while (scanf("%d %d", &x, &y) == 2)
    {
        printf("Mniejsza liczba jest %d", min(x, y));
    }
    return 0;


    }


double min(double x, double y)
{
    if (x > y)
        return y;
    else
        return x;

}