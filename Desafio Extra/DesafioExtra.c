#include <stdio.h>
#include <locale.h>

int main()
{

    // Declaração de variáveis
    float n1, n2, ppd, n3, nEU, nFinal, fEU, ap;
    int fn3;

    // Configura o local para português
    setlocale(LC_ALL, "Portuguese");

    // Solicita ao usuário a primeira nota (n1)
    printf("Digite a nota 1 (n1): ");
    scanf("%f", &n1);

    // Valida se a nota 1 está entre 0 e 4.5
    while (n1 < 0 || n1 > 4.5) 
    {
        printf("ERRO! AS NOTAS TÊM QUE SER MAIORES QUE 0 E MENORES QUE 4,5\n");
        printf("Digite a nota 1 (n1): ");
        scanf("%f", &n1);
    }

    // Solicita ao usuário a segunda nota (n2)
    printf("Digite a nota 2 (n2): ");
    scanf("%f", &n2);

    // Valida se a nota 2 está entre 0 e 4.5
    while (n2 < 0 || n2 > 4.5) 
    {
        printf("ERRO! AS NOTAS TÊM QUE SER MAIORES QUE 0 E MENORES QUE 4,5\n");
        printf("Digite a nota 2 (n2): ");
        scanf("%f", &n2);
    }

    // Solicita ao usuário a nota do PPD (que deve estar entre 0 e 1)
    printf("Digite a do PPD: ");
    scanf("%f", &ppd);

    while (ppd < 0 || ppd > 1) 
    {
        printf("ERRO! A NOTA DO PPD TEM QUE SER ENTRE 0 E 1\n");
        printf("Digite a nota do ppd: ");
        scanf("%f", &ppd);
    }

    // Solicita se o usuário fez o Exame Unificado (0 para não, 1 para sim)
    printf("Realizou o Exame Unificado (0 para não, 1 para sim): ");
    scanf("%f", &fEU);

    // Valida a resposta (deve ser 0 ou 1)
    while (fEU < 0 || fEU > 1) 
    {
        printf("ERRO! A OPÇÃO TEM QUE SER 0 OU 1\n");
        printf("Realizou o Exame Unificado ( 0 para não, 1 para sim): ");
        scanf("%f", &fEU);
    }

    // Se o Exame Unificado foi realizado (fEU == 1), solicita a nota do Exame
    if (fEU == 1) 
    {
        printf("Digite a nota do Exame Unificado (0 a 1): ");
        scanf("%f", &nEU);

        // Valida se a nota do Exame Unificado está entre 0 e 1
        while (nEU < 0 || nEU > 1) 
        {
            printf("ERRO! A NOTA DO EXAME UNIFICADO TEM QUE SER ENTRE 0 E 1\n");
            printf("Digite a nota do Exame Unificado (0 a 1): ");
            scanf("%f", &nEU);
        }
    } 
    else 
    {
        // Se o Exame Unificado não foi realizado, a nota é zero
        nEU = 0;
    }

    // Solicita se o usuário fez a N3 (0 para não, 1 para sim)
    printf("Realizou a N3 (0 para não, 1 para sim): ");
    scanf("%d", &fn3);

    // Valida a resposta (deve ser 0 ou 1)
    while (fn3 < 0 || fn3 > 1) 
    {
        printf("ERRO! A OPÇÃO TEM QUE SER 0 OU 1\n");
        printf("Realizou a N3 (0 para não, 1 para sim): ");
        scanf("%d", &fn3);
    }

    // Se a N3 foi realizada, solicita a nota N3
    if (fn3 == 1) 
    {
        printf("Digite a nota N3 (0 a 4.5): ");
        scanf("%f", &n3);

        // Valida se a nota N3 está entre 0 e 4.5
        while (n3 < 0 || n3 > 4.5) 
        {
            printf("ERRO! AS NOTAS TEM QUE SER MAIORES QUE 0 E MENORES QUE 4.5\n");
            printf("Digite a nota N3 (0 a 4.5): ");
            scanf("%f", &n3);
        }

        // Substitui a menor nota entre n1 e n2 pela nota N3
        if (n1 < n2) 
        {
            n1 = n3;
        } else 
        {
            n2 = n3;
        }
    }

    // Calcula a nota final somando n1, n2 e ppd
    nFinal = (n1 + n2 + ppd);

    // Verifica se a nota final é inferior a 9.9
    if (nFinal < 9.9) {
        // Se for menor, adiciona a nota do Exame Unificado à nota final
        ap = nFinal + nEU;
    } else {
        // Se for maior ou igual, exibe a nota final
        printf("Sua nota foi %.2f", nFinal);
    }

    // Ajusta a nota final para um máximo de 10, se necessário
    if (ap > 10) {
        ap = 10;
    }

    // Exibe a nota final e informa se o aluno foi aprovado ou reprovado
    printf("Nota final: %.2f\n", ap);
    if (ap >= 6) 
    {
        printf("Aprovado\n");
        printf("%.2f", ap);
    } 
    else 
    {
        printf("Reprovado\n");
        printf("%.2f", ap);
    }

    return 0;
}
