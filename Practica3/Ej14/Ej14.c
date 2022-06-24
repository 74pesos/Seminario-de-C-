#include <stdio.h>
#include "FuncionesEj12.h"
#include <string.h>
int main()
{
	int words=0;int line=1; int capicuas=0;int pos;
	char subcadena[22];int posStr=0;
	char str[]="Amigo BRILLA EL SOL OTTO CON VOS TE DEDICO ESTA CANCION \n LOQUITO AMIGUITO NAUTICO PERRITO EX DI SKERE POR LOS PICOS \n ANANA FALALA DIPTONGO MAGICO SEDUCTOR PRENDIDO QUE ABARCA ESPACIO \n";
	printf("%s\n",str);
	for(int i=1;i<strlen(str);i++) if(str[i]==' ') words++;
	for(int i=1;i<=words;i++)
	{
		pos=0;
		while((str[posStr]!=' ')&&(str[posStr]!='\0'))
		{
			subcadena[pos]=str[posStr];
			pos++;posStr++;
		}
		subcadena[pos]='\0';
		for(int j=0;j<strlen(subcadena);j++)
		{
			if(subcadena[j]=='\n') subcadena[j]='\0';
		}
		printf("Subcadena: %s\n",subcadena);
		if(es_palindromo(subcadena)&&subcadena[0]!='\0') capicuas++;;
		posStr++;
		if(str[posStr]=='\n')
		{
			printf("La linea %d tenia %d palabras capicuas\n",line,capicuas);
			capicuas=0;
			line++;
			printf("\n\n\n");
		}
	}
	return 0;
}
