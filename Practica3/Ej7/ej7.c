#include <stdio.h>
#include <stdlib.h>
void ArregloSuma(int v1[],int v2[],int diml3,int dimlMenor,int *v3)
{
	int j=0;
	for(int i=0;i<diml3;i++)
	{
		if(j<dimlMenor)
		{
			v3[i]=v1[i]+v2[i];
			j++;
		}
		else v3[i]=v1[i];
	}
}
int main()
{
	int vector1[]={1,44,543,123,233,2332,432};
	int vector2[]={40,232,123,55,11};
	int diml1=sizeof(vector1)/sizeof(vector1[0]);
	int diml2=sizeof(vector2)/sizeof(vector2[0]);
	int diml3;
	int *vector3;
	if(diml1>diml2)
	{
		diml3=diml1;
		vector3=(int *) malloc(sizeof(int)*diml3);
		ArregloSuma(vector1,vector2,diml3,diml2,vector3);
	}
	else
	{
		diml3=diml2;
		ArregloSuma(vector2,vector1,diml3,diml1,vector3);
	}
	for(int i=0;i<diml3;i++)printf("%d, ",vector3[i]);
	printf("\n");
	return 0;
}
