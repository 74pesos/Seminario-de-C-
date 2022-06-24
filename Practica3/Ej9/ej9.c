#include <stdio.h>
#include <string.h>
int cantPalabras(char* s)
{
	int x=0;
	if(s[0]!='\0')
	{
		x=1;
		for(int i=0;i<strlen(s)-1;i++) if(s[i]==' ') x++;
	}
	return x;
}
int main()
{
	char s[]="a";
	printf("La cantidad de palabras de la cadena dada es de: %d\n",cantPalabras(s));
	return 0;
}
