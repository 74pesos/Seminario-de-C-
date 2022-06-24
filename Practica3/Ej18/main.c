#include <stdio.h>
#include "Funcion.h"
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int numero;
	int base;
	char str[200];
	if(argc==3)
	{
		numero= (int) atoi(argv[1]);
		base= (int) atoi(argv[2]);
		convertir(numero,str,base);
		printf("La cadena del numero %d en base %d es: %s\n",numero,base,str);
	}
	else
	{
		printf("No se ingresaron de forma correcta los argumentos\n INGRESE NUMERO A CONVERTIR Y BASE\n");
		return 1;
	}
	return 0;
}
