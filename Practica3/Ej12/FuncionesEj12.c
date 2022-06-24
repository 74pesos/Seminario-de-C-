#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int es_palindromo(const char*word)
{
	int es=0;
	char *invertido=malloc(sizeof(char)*strlen(word));
	for(int i=strlen(word)-1,j=0;i>=0;i--,j++)
	{
		invertido[j]=word[i];
	}
	printf("El string dado es: %s\nEl string invertido es:%s\n",word,invertido);
	if(strcasecmp(word,invertido)==0) es=1;/*strcasecmp hace lo mismo que strcmp pero diferencia si los caracteres son mayuscula o minuscula*/
	return es;
}
char*invertir(char*dest)
{
	char aux[strlen(dest)];
	strcpy(aux,dest);
	for(int i=0,j=strlen(dest)-1;i<strlen(dest);i++,j--)
	{
		dest[i]=aux[j];
	}
	return dest;
}
char*encripto(char*dest, const char*src)
{
	int bits=strlen(src)*8;int aux;int j;
	char auxStr[9];
	dest=malloc(sizeof(char)*bits);
	for(int i=0;i<strlen(src);i++)
	{
		aux=src[i];
		printf("Aux esta en: %d\n",aux);
		j=0;
		while(aux!=0)
		{
			printf("Aux valores: %d //// ",aux);
			if(aux%2==0)auxStr[j]='1';
			else auxStr[j]='0';
			aux=aux/2;
			j++;
		}
	auxStr[j]=' ';
	invertir(auxStr);
	strcat(dest,auxStr);
	}
	printf("La cadena ingresada fue: %s\n La cadena encriptada en binario es:%s\n",src,dest);
	return dest;
}
