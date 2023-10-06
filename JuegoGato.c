#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void inicializarTablero(char tablero[3][3]);
void movimientos(char,int,char tab[3][3]);
void imptab(char tabla[][3]);
int revi(char tab[3][3], int);
void juego();

int main(){
    int opc = 0;
    do
    {
        printf("Quiere jugar gato?\n1.-Si\n2.-No\n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            system("cls");
            printf("BIENVENIDO AL JUEGO DEL GATO!\n");
            sleep(2);
            system("cls");
            juego();
            break;
        case 2:
            system("cls");
            printf("Saliendo...\n");
            sleep(4);
            break;
        default:
            printf("Ingrese una opcion valida\n");
        }
        system("cls");
    }while (opc != 2);
    return 0;
}

void juego()
{
    int i, b = 1;
    char tablero[3][3], x = NULL, o = NULL;
    inicializarTablero(*tablero);
    for(i=0;i<9;i++)
    {
        if(i % 2 == 0)
        {
            imptab(*tablero);
            movimientos('x',1,*tablero);
            b = revi(*tablero, i);
            if (b == 0)
            {
                break;
            }
            system("cls");
        }
        else
        {
            imptab(*tablero);
            movimientos('o',2,*tablero);
            b = revi(*tablero, i);
            if (b == 0)
            {
                break;
            }
            system("cls");
        }
    }
}

void inicializarTablero(char tablero[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            tablero[i][j] = ' ';
        }
    }
}

void imptab(char tabla[3][3])
{
    printf("%c|%c|%c\n",tabla[0][0],tabla[0][1],tabla[0][2]);
    printf("-----\n");
    printf("%c|%c|%c\n",tabla[1][0],tabla[1][1],tabla[1][2]);
    printf("-----\n");
    printf("%c|%c|%c\n",tabla[2][0],tabla[2][1],tabla[2][2]);
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

void movimientos(char y, int m,char d[3][3])
{
    int i=1,x;
    do
    {
        i=1;
        printf("El jugador %d en donde quieres poner tu digito\n", m);
        scanf("%i",&x);
        switch(x)
        {
            case 00:
                if(d[0][0]!=' ')
                {
                    printf("esta posicion ya esta llena\n");
                    i=2;
                }
                else
                {
                    d[0][0] = y;
                }
                break;
            case 01:
                if(d[0][1]!=' ')
                {
                    printf("esta posicion ya esta llena\n");
                    i=2;
                }
                else
                {
                    d[0][1] = y;
                }
                break;
            case 02:
                if(d[0][2]!=' ')
                {
                    printf("esta posicion ya esta llena\n");
                    i=2;
                }
                else
                {
                    d[0][2] = y;
                }
                break;
            case 10:
                if(d[1][0]!=' ')
                {
                    printf("esta posicion ya esta llena\n");
                    i=2;
                }
                else
                {
                d[1][0] = y;
                }
                break;
            case 11:
                if(d[1][1]!=' ')
                {
                    printf("esta posicion ya esta llena\n");
                    i=2;
                }
                else
                {
                d[1][1] = y;
                }
                break;
            case 12:
                if(d[1][2]!=' ')
                {
                    printf("esta posicion ya esta llena\n");
                    i=2;
                }
                else
                {
                    d[1][2] = y;
                }
                break;
            case 20:
                if(d[2][0]!=' ')
                {
                    printf("esta posicion ya esta llena\n");
                    i=2;
                }
                else
                {
                    d[2][0] = y;
                }
                break;
            case 21:
                if(d[2][1]!=' ')
                {
                    printf("esta posicion ya esta llena\n");
                    i=2;
                }
                else
                {
                    d[2][1] = y;
                }
                break;
            case 22:
                if(d[2][2]!=' ')
                {
                    printf("esta posicion ya esta llena\n");
                    i=2;
                }
                else
                {
                    d[2][2] = y;
                }
                break;
            default:
                printf("El valor ingresado no esta adentro del programa");
                i = 2;
                break;
        }
    }while(i!=1);
}
