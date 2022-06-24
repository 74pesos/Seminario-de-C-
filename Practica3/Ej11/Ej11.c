#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*       La función strcat() une la cadena src a la cadena dest sobreescribiendo
       el caracter `\0' al final de dest, y entonces añade un  caracter  final
       `\0'.   Las  cadenas  no  deben  solaparse, y la cadena dest debe tener
       suficiente espacio para el resultado.
*/
char *my_strcat(char *dest,const char *src)
{
	for(int i=strlen(dest),j=0;j<=strlen(src);i++,j++)
	{
		
		dest[i]=src[j];
	}
	return dest;
	/*strcpy (dest + strlen (dest), src);
  	return dest;*/
}
int my_strcmp(const char *s1,const char *s2)
{
	int rest=0;int i=0; int masLargo;
	if(strlen(s1)>=strlen(s2)) masLargo=strlen(s1);
	else masLargo=strlen(s2);
	while((rest==0)&&(i<masLargo))
	{
	rest=s1[i]-s2[i];
	i++;
	}
	return rest;
}
char *my_strcpy(char *dest,const char *src)
{
	int i;
	for(i=0;i<strlen(src);i++) dest[i]=src[i];
	dest[i]='\0';
	return dest;
}
size_t my_strlen(const char *s)
{
	int i=0;
	while(s[i]!='\0') i++;
	return i;
}
char *my_strstr(const char *haystack, const char *needle)
{
	char *puntero;int realizar=1;
	for(int i=0;i<strlen(haystack);i++)
	{
		if(haystack[i]==needle[0])
		{
			int j=1; int x=i+1; puntero = (char*)&haystack[i];
			while((realizar!=0)&&(j<strlen(needle)))
			{
				if(needle[j]!=haystack[x]) realizar=0;
				else
				{
					j++;x++;
				}
			}
			if(realizar!=0) return (char*)puntero;
		}
	}
	return (char*)NULL;
}
