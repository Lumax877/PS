#include <stdio.h>
#include <stdlib.h>

int main(){

    char ch;
    int a = 0;
    while((ch = getchar()) != '#')
    {
        if(ch == '.' || ch == '!')
        {
            a++;
        }
    }
    printf("Liczba zamian: %d\n", a);
    return 0;
}
