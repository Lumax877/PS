#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, suma = 0;
    printf("Podaj nieujemna liczbe n: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("podano liczbe ujemna");
        return 0;
    }
    for(int i=0;i<=n;i++)
    {
        suma =  suma + (i * i);
    }
    printf("Suma kwadratow liczb od 0 do n wynosi: %d", suma);
    return 0;
}
