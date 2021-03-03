#include <stdio.h>
#include <stdlib.h>

int main(){

    float liczba1, liczba2;
    int wyb;
    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &liczba1);
    printf("Wybierz rodzaj dzialania:\n");
    printf("1 - dodawanie\n");
    printf("2 - odejmowanie\n");
    printf("3 - mnozenie\n");
    printf("4 - dzielenie\n");
    printf("Wybierz operacje wpisujac odpowiednia cyfre: ");
    scanf("%d", &wyb);
    printf("\nPodaj druga liczbe: ");
    scanf("%f", &liczba2);
    if(wyb == 1){
        float wynik = liczba1 + liczba2;
        printf("%.f + %.f = %.f", liczba1, liczba2, wynik);
    }
    else if(wyb == 2){
        float wynik = liczba1 - liczba2;
        printf("%.f - %.f = %.f", liczba1, liczba2, wynik);
    }
    else if(wyb == 3){
        float wynik = liczba1 * liczba2;
        printf("%.f * %.f = %.f", liczba1, liczba2, wynik);
    }
    else if(wyb == 4){
        float wynik = liczba1 / liczba2;
        printf("%f / %f = %g", liczba1, liczba2, wynik);
    }
    else{
        printf("wpisana liczba nie odnosi sie do zadnej operacji");
    }


    return 0;
}