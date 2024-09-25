#include <stdio.h>
#include <locale.h>

int main(){

    float n1, n2, ppd;

setlocale(LC_ALL, "Portuguese");
    printf("Digite a nota 1 (n1): ");
    scanf("%f", &n1);

    while (n1 < 0 || n1 > 4.5) {
        system("cls");
        printf("ERRO! AS NOTAS TÊM QUE SER MAIORES QUE 0 E MENORES QUE 4,5\n");
        printf("Digite a nota 1 (n1): ");
        scanf("%f", &n1);
    }

printf("Digite a nota 2 (n2): ");
    scanf("%f", &n2);

    while (n2 < 0 || n2 > 4.5) {
        system("cls");
        printf("ERRO! AS NOTAS TÊM QUE SER MAIORES QUE 0 E MENORES QUE 4,5\n");
        printf("Digite a nota 2 (n2): ");
        scanf("%f", &n2);
    }

printf("Digite a do PPD: ");
    scanf("%f", &ppd);

    while (ppd < 0 || ppd > 1) {
        system("cls");
        printf("ERRO! A NOTA DO PPD TEM QUE SER ENTRE 0 E 1\n");
        printf("Digite a nota 2 (n2): ");
        scanf("%f", &n2);
    }

    return 0;
}