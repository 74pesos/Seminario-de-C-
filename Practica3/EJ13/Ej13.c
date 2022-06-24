#include <stdio.h>
#include "FuncionesEj12.h"
#include <string.h>
int main()
{
	char *palabras[5]={"Perro", "magico", "Fuego", "Neuquen", "Sexo"};
	char str[]="AMIGO NEUQUEN OTTO OCO ASA AHAHAH";
	int capicuas=0;int capicuas2=0;int words=1;
	int pos;int posStr=0;
	char subcadena[22];
	for(int i=0;i<5;i++)
	{
		if(es_palindromo(palabras[i])) capicuas++;
	}
	printf("La cantidad de palabras capicuas en el vector es de: %d\n",capicuas);
	for(int i=0;i<strlen(str);i++) if(str[i]==' ') words++;
	for(int i=1;i<=words;i++)
	{
		pos=0;
		while((str[posStr]!=' ')&&(str[posStr]!='\0'))
		{
			subcadena[pos]=str[posStr];
			pos++;posStr++;
		}
		subcadena[pos]='\0';
		printf("Subcadena: %s\n",subcadena);
		if(es_palindromo(subcadena)) capicuas2++;;
		posStr++;
	}
	printf("La cantidad de palabras capicuas encontradas en la cadena de palabras es de: %d\n",capicuas2);
	return 0;
}
