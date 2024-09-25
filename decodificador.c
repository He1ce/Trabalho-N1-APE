#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "decodificador.h"
#include "func_val.h"

void decodificador(char codigo[100], int b)
{
    char aux[3];
    int traducao[50];

    for (int i = 0; i < 99; i += 2)
    {
        aux[0] = codigo[i];
        aux[1] = codigo[i + 1];
        aux[2] = '\0';

        traducao[i/2] = strtol(aux, NULL, 16);
    }

    for (int i = 0; i < 50; i++)
    {
        if(traducao[i] == 0)
        {
            break;
        }
        else if(func_val(i+1,b) == 0)
        {
            continue;
        }
        else
        {
            printf("%c", traducao[i]);
        }
    }
    printf("\n");
}
