#include <stdio.h>
#include <ctype.h>
#include <string.h>
void capitalizar(char *cadena)
{
	printf("Forma original: '%s'\n", cadena);// Pasamos el primer caracter a mayúsculas
	cadena[0] = toupper(cadena[0]);
	printf("Capitalizado: '%s'\n", cadena);
	puts("--");
}
int main(int argc, char *argv[])
{
	char cadena1[] = "foo";
	//char *cadena2 = "bar";
	char cadena2[] = "bar";/*CAMBIANDO LA FORMA EN LA QUE SE DECLARA FUNCIONA PERO NO SE SI EL ERROR SEA ESE*/
	printf("%s ex di amiguito RAWR\n",cadena2);
	capitalizar(cadena1);
	capitalizar(cadena2);
	return 0;
}
