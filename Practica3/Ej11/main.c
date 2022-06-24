#include <stdio.h>
#include "Ej11.h"
#include <string.h>
int main()
{
	char str1[]="Avion sovietico aleman";
	char str2[]="Alpachino";
	char str3[400]="";
	printf("Cadena 1: %s\ncadena 2: %s\n",str1,str2);
	printf("peso de la cadena 1: %ld\n",sizeof(str1));
	printf("peso de la cadena 2: %ld\n",sizeof(str2));
	printf("peso de la cadena 3: %ld\n",sizeof(str3));
	my_strcat(str3,str1);
	my_strcat(str3,str2);
	printf("Cadena con my_strcat: %s\n",str3);
	int x=my_strcmp(str1,str2);
	printf("El valor dado por el my_strcmp fue de: %d\n El valor dado por el real es de: %d\n",x,strcmp(str1,str2));
	my_strcpy(str1,str2);
	printf("strcopyMio: %s\n",str1);
	printf("My_strlen dio el resultado: %ld\n",my_strlen(str1));
	printf("El strlen real dio el resultado: %ld\n",strlen(str1));
	printf("//////EL STR QUE USA EL STRSTR AHORA MISMO ES: %s///\n",str1);
	char *xada=strstr(str1,"Alpachino");
	printf("str str original: %s\n",xada);
	char *mio=my_strstr(str1,"Alpachino");
	printf("strstr mio: %s\n",mio);
	return 0;
}
