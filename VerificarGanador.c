#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int revi(char*, int);

int main()
{
    int tabla[3][3], i = 0;
    revi(tabla[3][3], i);
    return 0;
}

int revi(char tab [3][3], int turno)
{
    int r = 1;
    if (((tab[0][0] == 'x' && tab[0][1] == 'x' && tab[0][2] == 'x'))||
        ((tab[1][0] == 'x' && tab[1][1] == 'x' && tab[1][2] == 'x'))||
        ((tab[2][0] == 'x' && tab[2][1] == 'x' && tab[2][2] == 'x'))||
        ((tab[0][0] == 'x' && tab[1][0] == 'x' && tab[2][0] == 'x'))||
        ((tab[0][1] == 'x' && tab[1][1] == 'x' && tab[2][1] == 'x'))||
        ((tab[0][2] == 'x' && tab[1][2] == 'x' && tab[2][2] == 'x'))||
        ((tab[0][0] == 'x' && tab[1][1] == 'x' && tab[2][2] == 'x'))||
        ((tab[2][0] == 'x' && tab[1][1] == 'x' && tab[1][2] == 'x')))
    {
        printf("El jugador X ha ganado\n\nEl jugador O ha perdido");
        sleep(4);
        r = 0;
    }
    if (((tab[0][0] == 'o' && tab[0][1] == 'o' && tab[0][2] == 'o'))||
        ((tab[1][0] == 'o' && tab[1][1] == 'o' && tab[1][2] == 'o'))||
        ((tab[2][0] == 'o' && tab[2][1] == 'o' && tab[2][2] == 'o'))||
        ((tab[0][0] == 'o' && tab[1][0] == 'o' && tab[2][0] == 'o'))||
        ((tab[0][1] == 'o' && tab[1][1] == 'o' && tab[2][1] == 'o'))||
        ((tab[0][2] == 'o' && tab[1][2] == 'o' && tab[2][2] == 'o'))||
        ((tab[0][0] == 'o' && tab[1][1] == 'o' && tab[2][2] == 'o'))||
        ((tab[2][0] == 'o' && tab[1][1] == 'o' && tab[1][2] == 'o')))
    {
        printf("El jugador O ha ganado\n\nEl jugador X ha perdido");
        sleep(4);
        r = 0;
    }
    if (r != 0 && turno == 8)
    {
        printf("Es un empate");
        sleep(4);
        r = 0;
    }
    return r;
}
