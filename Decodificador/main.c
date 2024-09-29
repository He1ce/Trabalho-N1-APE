#include <stdio.h>
#include <string.h>
#include "decodificador.h" // Inclui a definição da função decodificador

int main()
{
    int qtd_mensagens;

    printf("Insira a quantidade de mensagens interceptadas: ");
    scanf("%d", &qtd_mensagens);

    // Vetores para armazenar as mensagens e valores de b
    int b[qtd_mensagens];
    char mensagens[qtd_mensagens][101]; // Armazena as mensagens interceptadas


    // Coleta dos dados
    for (int i = 0; i < qtd_mensagens; i++)
    {
        printf("Insira o valor de B: ");
        scanf("%d", &b[i]);

        // Limpa o buffer do '\n' deixado pelo scanf
        getchar(); 

        printf("Insira a mensagem: ");
        fgets(mensagens[i], 101, stdin);
    }

    // Processamento (decodificação) das mensagens
    for (int i = 0; i < qtd_mensagens; i++)
    {
        decodificador(mensagens[i], b[i]); // Chama a função decodificador para cada mensagem
    }

    return 0;
}
