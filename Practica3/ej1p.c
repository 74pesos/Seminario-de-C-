#include <stdio.h>
#include <string.h>
void convertir(int i, char s[] , int b)
{
	int resto; int j=0;
	while(i!=b) 
	{
		resto = i%b;
		if((resto>=0)&&(resto<=9)) resto=resto+48;
		else resto=resto+64;
		s[j]= resto;
		i=i/b;
		printf("%c",s[j]);
		j++;
	}
	printf("\n");
	printf("%s\n",s);
}
char *invertir(char s[])
{
	int length=strlen(s);
	char temporal;
	for(int izq=0,der=length-1;izq<(length/2);izq++,der--)
	{
		temporal=s[izq];
		s[izq]=s[der];
		s[der]=temporal;
	}
	return s;
}
void tablaCrear (char tabla[])
{
	int x=0;
	for(int i=0;i<9;i++)
	{
		tabla[i]=48+i;
	}
	for(int i=10;i<36;i++)
	{
		tabla[i]=64+x;
		x++;
	}
}
int main()
{
	char tabla[38];
	int b;int i; 
	char s[5000];
	tablaCrear(s);
	printf("Cadena de tabla: %s\n",tabla);
	printf("Ingrese la base\n");
	scanf("%d",&b);
	printf("Ingrese el numero a convertir\n");
	scanf("%d",&i);
	convertir(i,s,b);
	printf("%ld\n",strlen(s));
	printf("Cadena: %s\n",s);	
	invertir(s);	
	printf("Representacion en base %d: \n",b);
	printf("%s\n",s);
	return 0;
}

