#include <stdio.h>
#include <stdlib.h>

int main(){
    char znak;
    char tab[100];
    int i = 0;
    while((znak = getchar()) != '#')
	{
        if(znak == '\n') {tab[i] = '\\n';}
        else {tab[i] = znak;}

        i++;
    }
    for(int x = 0; x < i; x++)
	{
        printf("'%c' - %d, ", tab[x], (int)tab[x]);

        if(x == 0)
        {

        }
        else if(x % 8 == 0)
            printf("\n");
    }
    return 0;
}