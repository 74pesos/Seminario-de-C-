#include <stdio.h>
#include "funcion.h"
int main()
{
	int comp;
	comp=comparar(getchar());
	if(comp==1)
	{
		printf("El caracter ingresado era mayuscula\n");
	}
	else
	{
		printf("El caracter ingresado no era mayuscula\n");
	}
	return 0;
}
