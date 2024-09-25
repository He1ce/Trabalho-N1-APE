#include <stdio.h>
#include <locale.h>
#include "func_val.h"
#include "decodificador.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int pos, qtd_mensagens, b;
    char teste[] = "566F6388732073C66F2076656E6365646F867265732C20766F63C3887320636FBE6E73656775656D2E002DC6C921B7B87FCF";

    printf("Insira a quantidade de mensagens interceptadas: ");
    scanf("%d", &qtd_mensagens);

    for(int i = 0; i < qtd_mensagens;i++)
    {
        printf("Digite a posição do caracter: ");
        scanf("%d", &pos);
        printf("Insira o valor de B: ");
        scanf("%d", &b);
    }

    printf("Valor func_val: %d\n", func_val(pos,b));

    decodificador(teste, b);

    return 0;
}
