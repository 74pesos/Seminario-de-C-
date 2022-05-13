#include <stdio.h>
#define macro1(expr) printf(#expr "=%g\n",expr);
#define macro2(uno, dos) uno ## dos
int main()
{
	int x=5;
	int y=6;
	macro1(x);
	macro2(x,y);
	return 0;
}
