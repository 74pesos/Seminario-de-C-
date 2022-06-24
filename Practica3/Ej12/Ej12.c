#include <stdio.h>
#include <string.h>
#include "FuncionesEj12.h"
int main()
{
	char palabra[100];
	char *dest="";
	printf("Ingrese una palabra\n");
	scanf("%s",palabra);
	if(es_palindromo(palabra)) printf("La palabra es palindromo\n");
	else printf("La palabra NO es palindromo\n");
	encripto(dest,palabra);
	return 0;
}
