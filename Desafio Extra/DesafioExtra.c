#include <stdio.h>
#include <locale.h>

int main(){

    float n1, n2, ppd, n3, nEU, nFinal, fEU, ap;
    int fn3;

setlocale(LC_ALL, "Portuguese");
    printf("Digite a nota 1 (n1): ");
    scanf("%f", &n1);

    while (n1 < 0 || n1 > 4.5) {
        printf("ERRO! AS NOTAS TÊM QUE SER MAIORES QUE 0 E MENORES QUE 4,5\n");
        printf("Digite a nota 1 (n1): ");
        scanf("%f", &n1);
    }

printf("Digite a nota 2 (n2): ");
    scanf("%f", &n2);

    while (n2 < 0 || n2 > 4.5) {
        printf("ERRO! AS NOTAS TÊM QUE SER MAIORES QUE 0 E MENORES QUE 4,5\n");
        printf("Digite a nota 2 (n2): ");
        scanf("%f", &n2);
    }

printf("Digite a do PPD: ");
    scanf("%f", &ppd);

    while (ppd < 0 || ppd > 1) {
        printf("ERRO! A NOTA DO PPD TEM QUE SER ENTRE 0 E 1\n");
        printf("Digite a nota do ppd: ");
        scanf("%f", &ppd);
    }

printf("Realizou o Exame Unificado (0 para não, 1 para sim): ");
    scanf("%f", &fEU);

    while (fEU < 0 || fEU > 1) {
        printf("ERRO! A OPÇÃO TEM QUE SER 0 OU 1\n");
        printf("Realizou o Exame Unificado ( 0 para não, 1 para sim): ");
        scanf("%f", &fEU);
}

if (fEU == 1) {
    printf("Digite a nota do Exame Unificado (0 a 1): ");
    scanf("%f", &nEU);
    while (nEU < 0 || nEU > 1) {
        printf("ERRO! A NOTA DO EXAME UNIFICADO TEM QUE SER ENTRE 0 E 1\n");
        printf("Digite a nota do Exame Unificado (0 a 1): ");
        scanf("%f", &nEU);
    }
} else {
    nEU = 0;
}

printf("Realizou a N3 (0 para não, 1 para sim): ");
scanf("%d", &fn3);
while (fn3 < 0 || fn3 > 1) {
    printf("ERRO! A OPÇÃO TEM QUE SER 0 OU 1\n");
    printf("Realizou a N3 (0 para não, 1 para sim): ");
    scanf("%d", &fn3);
}

if (fn3 == 1) {
    printf("Digite a nota N3 (0 a 4.5): ");
    scanf ("%f", &n3);
    while (n3 < 0 || n3 > 4.5) {
        printf("ERRO! AS NOTAS TEM QUE SER MAIORES QUE 0 E MENORES QUE 4.5\n");
        printf("Digite a nota N3 (0 a 4.5): ");
        scanf("%f", &n3);
    } 

    if (n1 < n2) {
        n1 = n3;
    } else {
        n2 = n3;
    }
}

nFinal = (n1 + n2 + ppd);

if (nFinal < 9.9) {
    ap = nFinal + nEU;
} else {
    printf("Sua nota foi %.2f", nFinal);
}

if (ap > 10) {
    ap = 10;
}

printf("Nota final: %.2f\n", ap);
if (ap >= 6) {
    printf("Aprovado\n");
    printf("%.2f", ap);

} else {
    printf("Reprovado\n");
    printf("%.2f", ap);

}

    return 0;
}
