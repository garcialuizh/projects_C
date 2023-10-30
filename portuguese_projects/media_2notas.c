#include <stdio.h>
#include <stdlib.h>


void	main()
{
	//Declaracao de variaveis
	float	nota_1, nota_2, resultado;

	//Leitura das notas
	printf("Digite a primeira nota: ");
	scanf("%f", &nota_1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota_2);
	
	//Processamento da media
	resultado = (nota_1 + nota_2) / 2;
	printf("A sua media eh %.1f \n", resultado);
}
