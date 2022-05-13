#include <stdio.h>
#include "funcion.h"
int main()
{
	char x='A';
	if(esdig(x)==0)
	{
		printf("El valor ingresado no era un digito\n");
	}
	else
	{
		printf("El valor ingresado era un digito\n");
	}
	return 0;
}
