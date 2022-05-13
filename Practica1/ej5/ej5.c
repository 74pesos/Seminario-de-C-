#include <limits.h>
int main(){
	return 0;
}
char uno()
{
	char c;
	c='A' + 2;
	return (c);
}
int dos()
{
	int a=10;
	return((a++ == 10)?a:--a);
}
float tres()
{
	float x = (int) 3.7 + 4.5;
	return x;
}
int cuatro()
{
	float x=3.6;
	return (int)x;
}
int cinco()
{
	int a=17, b;
	b= ++a % 3;
	return(b > 1);
}
int seis()
{
	int a=3;
	a <<=3;
	return a;
}
int siete()
{
	unsigned a= 8,b;
	b= ~a;
	return (b== (UINT_MAX - 8));
}
int ocho()
{
	int i=320;
	return(char) i;
}
double nueve()
{
	char c= 'A';
	return (double) c;
}

