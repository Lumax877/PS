#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int rzad_zn(char, int, int);

int main(void){

   int a;
   printf("Podaj liczbe: \n");
   scanf("%d", &a);
   printf("Wynik: %d", ascend(a));
   return 0;
}


int ascend(int a)
{
    return pow(2, a);
}
