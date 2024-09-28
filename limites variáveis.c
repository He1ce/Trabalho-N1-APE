#include <stdio.h>
#include <limits.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("1) Tabela de limites m�ximos e m�nimos das vari�veis:\n");
	printf("\n");
	printf("----------------------------------------------------------------------------------------------------------\n");
	printf("        Vari�vel        |               M�ximo            |                         M�nimo                \n");
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
 	printf("2) Representa��o e explica��o do que acontece ao adcionar um valor maior do que o suportado pela vari�vel: \n");
    char a;  

    a = 300;  

    printf("Valor atribu�do a 'a': %d\n", a);
    printf("Valor de 'a' como char: %c\n", a);
    printf("Explica��o: ao atribuir um n�mero maior do que o suportado pela vari�vel char, no intervalo ela vai ir diminuindo o  valor indicado por 256 que � o m�ximo, apresentado assim, resultados da tabela ASCII na execu��o.\n ");

    printf("\n");
    printf("3)Conceito das vari�veis:\n");
    printf("a. char: armazena letras, n�meros e s�mbolos.\n");
    printf("b. int: usado principalmente em opera��es aritm�ticas inteiras e contagens.\n");
    printf("c. short int: usado para economizar mem�ria e os valores inteiros s�o pequenos.\n");
    printf("d. unsigned int: usado em contagens e manipula��es de �ndices, opera��es que n�o se usa n�meros negagtivos.\n ");
    printf("e. long int: usado para contagens grandes, mais complexas que utilizam intervalos.\n");
    printf("f. unsigned long int: quando necessita de um intervalo maior sem permitir valores negativos.\n");
    printf("g. long long int: para valores inteiros que podem exceder o intervalo de um long.\n");
    printf("h. unsigned long long int: para valores inteiros que podem exceder o intervalo de um long.\n");



}

