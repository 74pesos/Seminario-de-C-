#include <stdio.h>
#include <string.h>
void invertirIterativo(char* cadena)
{
	char aux; int largo= strlen(cadena);
	for(int i=0, j=largo-1;i<strlen(cadena)/2;i++,j--)
	{
			aux=cadena[j];
			cadena[j]=cadena[i];		
			cadena[i]=aux;
	}
}
void invertirRecursivo(char* act, int x)
{
	char aux;int pos=strlen(act)-1-x;
	if(x<strlen(act)/2)
	{
		aux=act[pos];
		act[pos]=act[x];
		act[x]=aux;
		invertirRecursivo(act,++x);
	}
}
char *invertirIterativoRetorno(char* cadena)
{
	char retorno[strlen(cadena)];
	;int x=0;
	for(int i=strlen(cadena)-1;i>=0;i--)
	{
		retorno[x]=cadena[i];
		x++;
	}
	retorno[x]='\0';
	printf("%s cadena\n",retorno);
	strcpy(cadena,retorno);
	return cadena;
}
int main()
{
	char prueba[]="12345678";
	printf("%s, largo: %ld\n",prueba,strlen(prueba));
	invertirIterativo(prueba);
	printf("Forma iterativa: %s\n",prueba);
	invertirRecursivo(prueba,0);
	printf("Forma recursiva: %s\n", prueba);
	printf("Retorno: %s\n",invertirIterativoRetorno(prueba));
	return 0;
}
