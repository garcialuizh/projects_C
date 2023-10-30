#include <stdio.h>
#include <stdlib.h>


void	main()
{
	//Declaracao
	double	a, b, result;
	int	c, d;
	//Leitura de valores
	printf("Digite o primeiro valor: ");
	scanf("%lf", &a);
	printf("Digite o segundo valor: ");
	scanf("%lf", &b);
	
	//Soma
	result = a + b;
	printf("A soma de %.2f + %.2f eh %.2f \n", a, b, result);

	//Subtracao
	result = a - b;
	printf("A subtracao de %.2f - %.2f eh %.2f \n", a, b, result);

	//Multiplicacao
	result = a * b;
	printf("A multiplicacao de %.2f * %.2f eh %.2f \n", a, b, result);

	//Divisao
	result = a / b;
	printf("A divisao de %.2f / %.2f eh %.2f \n", a, b, result);
	
	//Resto da divisao
	printf("Digite o primeiro valor inteiro: ");
	scanf("%d", &c);
	printf("Digite o segundo valor inteiro: ");
	scanf("%d", &d);
	result = c % d;
	printf("O resto da divisao de %d mod %d eh %.2f \n", c, d, result);

	//Valor Absoluto
	printf("O valor absoluto de -51 eh %d \n", abs(-51));
}
