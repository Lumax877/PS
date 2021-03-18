#include <stdio.h>
#include <stdlib.h>
int rzad_zn(char, int, int);

int main(void){

    char ch;
    int i, j;
    printf("Podaj znak: \n");
    scanf("%c", &ch);
    printf("Podaj dwie liczby w porządku rosnącym: \n");
    scanf("%d %d", &i, &j);
    printf("________________________________________________\n");
    rzad_zn(ch, i, j);
    printf("\n");
    printf("________________________________________________\n");
    return 0;
}


int rzad_zn(char ch, int i, int j)
{
    int a;
    while(a != j)
    {
        if (a < i)
        {
            printf(" ");
            a++;
        }
        else
        {
         printf("%c", ch );
         printf(" ");
         a++;
        }
    }
}