#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "decodificador.h" // Header personalizado para a função decodificador
#include "func_val.h" // Header personalizado para função func_val

void decodificador(char codigo[101], int b)
{
    char aux[3]; // Variável auxiliar para armazenar dois caracteres do código
    int traducao[51]; // Array para armazenar a tradução de cada par de caracteres hexadecimais


    for (int i = 0; i < 100; i += 2) // Converte a cada dois caracteres do código de hexadecimal para decimal
    {
        aux[0] = codigo[i]; // Primeiro caracter
        aux[1] = codigo[i + 1]; // Segundo caracteree
        aux[2] = '\0'; // Adiciona o caractere nulo para formar a string

        traducao[i/2] = strtol(aux, NULL, 16); // Converte de hexadecimal para decimal
    }
    
    // Itera sobre a tradução e imprime os caracteres, conforme condições
    for (int i = 0; i < 51; i++)
    {
        if(traducao[i] == 0)
        {
            break; // Interrompe o loop se encontrar um valor 0 na tradução
        }
        else if(func_val(i+1,b) == 0)
        {
            continue; // Pula a iteração se a função func_val retornar 0
        }
        else
        {
            printf("%c", traducao[i]);
        }
    }
    printf("\n");
}
