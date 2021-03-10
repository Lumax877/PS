#include <stdio.h>
#include <stdlib.h>

int main(){

    char tab[26];
    int i = 0;
    char l = 'a';
    while(l <= 'z')
    {
        tab[i] = l;
        l++;
        i++;
    }
    for(int i = 0; i < 26; i++)
    {
        printf("%c ", tab[i]);
    }
    return 0;
}