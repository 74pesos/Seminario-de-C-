#include <stdio.h>
#include <string.h>
void convertir(int i, char s[] , int b)
{
	int resto; int j=0; int negativo=0;
	char tabla[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if(i<0)
	{
		negativo=1;
		i=i*-1;
	}
	if(i==0) s[j]=0;
	else
		while(i!=0) 
		{
			resto = i%b;
			s[j]= tabla[resto];
		  i=i/b;
			printf("%c",s[j]);
			j++;
		}
	printf("\n");
	if(negativo) s[j]='-';
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
int main()
{
	int b;int i; 
	char s[5000];
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
