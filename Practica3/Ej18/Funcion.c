#include <stdio.h>
#include <string.h>
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
	invertir(s);
}
