#include <string.h>
#include <stdio.h>
int ocurrencias(char *str,char *arg)
{
	int ocurrencias=0;int words=1;
	int pos;int posStr=0;
	char subcadena[40];
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
		if(strcmp(subcadena,arg)==0) ocurrencias++;;
		posStr++;
	}
	return ocurrencias;
}
