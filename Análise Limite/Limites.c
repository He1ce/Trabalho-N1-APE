#include <stdio.h>
#include <limits.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("1) Tabela de limites máximos e mínimos das variáveis:\n");
	printf("\n");
	printf("----------------------------------------------------------------------------------------------------------\n");
	printf("        Variável        |               Máximo            |                         Mínimo                \n");
	printf("----------------------------------------------------------------------------------------------------------\n");
	printf("          char                     %d                                       %d                            \n", CHAR_MAX, CHAR_MIN);
	printf("           int                     %d                                       %d                            \n", INT_MAX, INT_MIN);
	printf("          shrt                     %d                                       %d                            \n", SHRT_MAX, SHRT_MIN);
	printf("          uint                     %5u                                      %15u                          \n", UINT_MAX, 0 );
	printf("          long                     %ld                                      %ld                           \n", LONG_MAX, LONG_MIN);
	printf("          ulong                    %u                                       %u                            \n", ULONG_MAX, 0);
	printf("          llong                    %lld                                     %lld                          \n", LLONG_MAX, LLONG_MIN);
	printf("          ullong                   %u                                       %llu                          \n", ULLONG_MAX, 0);
	printf("----------------------------------------------------------------------------------------------------------\n");
 
    printf("\n");
 	printf("2) Representação e explicação do que acontece ao adcionar um valor maior do que o suportado pela variável: \n");
    char a;  

    a = 300;  

    printf("Valor atribuído a 'a': %d\n", a);
    printf("Valor de 'a' como char: %c\n", a);
    printf("Explicação: ao atribuir um número maior do que o suportado pela variável char, no intervalo ela vai ir diminuindo o  valor indicado por 256 que é o máximo, apresentado assim, resultados da tabela ASCII na execução.\n ");

    printf("\n");
    printf("3)Conceito das variáveis:\n");
    printf("a. char: armazena letras, números e símbolos.\n");
    printf("b. int: usado principalmente em operações aritméticas inteiras e contagens.\n");
    printf("c. short int: usado para economizar memória e os valores inteiros são pequenos.\n");
    printf("d. unsigned int: usado em contagens e manipulações de índices, operações que não se usa números negagtivos.\n ");
    printf("e. long int: usado para contagens grandes, mais complexas que utilizam intervalos.\n");
    printf("f. unsigned long int: quando necessita de um intervalo maior sem permitir valores negativos.\n");
    printf("g. long long int: para valores inteiros que podem exceder o intervalo de um long.\n");
    printf("h. unsigned long long int: para valores inteiros que podem exceder o intervalo de um long.\n");



}

