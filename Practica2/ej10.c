#include <stdio.h>
char* DEF(int x)
{
	char* format;
	if((x>=1)&&(x<=31)) format="%10d";
	else format="%10.*s";
	return format;
}
int main()
{
	const char* dias[7]={
		"Lunes","Martes","Miercoles","Jueves",
		"Viernes","Sabado","Domingo"};
	int i;
	for(i=0;i<7;i++) printf(DEF(0),3,dias[i]);
	for(i=1;i<=31;i++)
	{
		if(!((i - 1) % 7)) printf("\n");
		printf(DEF(i),i);
	}
	printf("\n");
	return 0;
}
