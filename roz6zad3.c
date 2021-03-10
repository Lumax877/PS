#include <stdio.h>
#include <stdlib.h>

int main(){
    char l = 'F';
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", l);
            l--;
        }
        printf("\n");
        l = 'F';
    }
    return 0;
}
