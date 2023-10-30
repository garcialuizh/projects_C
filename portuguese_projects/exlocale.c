#include <stdio.h>
#include <locale.h>


int	main() 
{
	setlocale(LC_ALL, "en_US.UTF-8");
	double	number = 1234.56;
	printf("Formatted number: %.2f \n", number);
	return 0;
}
