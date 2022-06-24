#include <stdio.h>
#include <string.h>
#include "Funcion.h"
int main(int argc,char *argv[])
{
	if(argc>1)
	{
		char str[1000];
		printf("Ingresar string por teclado\n");
		fgets(str,1000,stdin);
		for (int i=0;i<strlen(str);i++) if(str[i]=='\n') str[i]='\0';
		printf("cadena: %s\n\n\n",str);
		printf("El argumento esta en el str una cantidad de %d veces\n",ocurrencias(str,argv[1]));
	}
	else
	{
		printf("SE INGRESARON DE FORMA INCORRECTA ARGUMENTOS\n");
		return 1;
	}
	return 0;
}
