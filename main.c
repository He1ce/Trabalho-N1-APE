#include <stdio.h>
#include "val.h"
#include "decodificador.h"

int main()
{
    int qtd_mensagens, b;
    char teste[101];

    printf("Insira a quantidade de mensagens interceptadas: ");
    scanf("%d", &qtd_mensagens);

    for(int i = 0; i < qtd_mensagens;i++)
    {
        
        printf("Insira o valor de B: ");
        scanf("%d", &b);

        printf("Insira a mensagem: ");
        fgets(teste, 101, stdin);

        decodificador(teste, b);
    }


    
    return 0;
}

