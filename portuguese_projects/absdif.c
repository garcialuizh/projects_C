#include <stdio.h>
#include <stdlib.h>


void	main()
{

	//mostrar o valor absoluto da diferenca de dois valores inseridos
	//Declaracao de variaveis
	int	valor1, valor2;

	//Leitura dos dois valores
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%d", &valor2);

	//Processamento e impressao na tela
	printf("O valor Absoluto da diferenca entre os dois valores eh %d \n", abs(valor1 - valor2));
}
