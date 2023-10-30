#include <stdio.h>
#include <locale.h>


void    main()
{
	//Declaracao de variaveis
	int	a = 50;
	float	b = 4.55;
	char	letra = 't';

		
	//Permite usar acentos e caracteres especiais nas strings de acordo com a regiao definida
	setlocale(LC_ALL,"pt_BR.UTF-8");
	//Exemplo
	printf("Ol~a~~! \n");
	
	//Apenas imprime um Hello, World na tela!
	printf("Hello, World! \n");
	
	//Imprime o valor atual das variaveis na tela!
	printf("O valor de a eh %d \n", a);
	printf("O valor de b eh %.2f \n", b);
	printf("O valor de letra eh %c \n", letra);
	
	//Leitura de novos valores introduzidos pelo usuario

	//Limpa buffer de entrada para leitura
        fflush(stdin); 
        //Leitura do novo valor de letra
        scanf("%c", &letra);
	
	//Imprime novo valor de letra
        printf("O valor de letra mudou para %c \n", letra);

	//Leitura do novo valor de a
	scanf("%d", &a);

	//Imprime novo valor de a
	printf("O valor de a mudou para %d \n", a);

	//Leitura do novo valor de b
	scanf("%f", &b);

	//Imprime novo valor de b
	printf("O valor de b mudou para %.2f \n", b);
}
