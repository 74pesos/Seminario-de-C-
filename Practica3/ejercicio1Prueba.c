#include <stdio.h>
#include <string.h>
char *signo(char s[],int i)
{
	int length=strlen(s);
	if(i<0) s[length]='-';
	printf("Se ingreso %c en el string\n",s[length+1]);
	s[length+1]=0;
	return s;
}
void convertir(int i, char s[] , int b)
{
	if(i<0) i=i*-1;
	int resto; int j=0;
	while(i!=0) 
	{
		resto = i%b;
		if((resto>=0)&&(resto<=9)){
			 resto=resto+48;
			 s[j]= resto;
			 j++;
		}
		else
		{
			resto=resto+64;
			if((resto>='A')&&(resto<='Z'))
			{				
				s[j]= resto;
				j++;	
			}
		}
		i=i/b;
		printf("%c",s[j]);
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
int main()
{
	int b;int i; 
	char s[5000];
	printf("Ingrese la base\n");
	scanf("%d",&b);
	printf("Ingrese el numero a convertir\n");
	scanf("%d",&i);
	printf("Numero en decimal: %d\n",i);
	convertir(i,s,b);
	printf("Largo del string: %ld\n",strlen(s));
	printf("Cadena: %s\n",s);
	printf("Numero en decimal: %d\n",i);
	printf("Representacion con signo: %s\n",signo(s,i));	
	invertir(s);	
	printf("Representacion en base %d: \n",b);
	printf("%s\n",s);
	return 0;
}
