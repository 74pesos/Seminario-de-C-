#include <stdio.h>
#define min(x,y){if(x>y) printf("%d es mayor que %d\n",x,y); else if(y>x) printf("%d es mayor que %d\n",y,x); else printf("Los valores son identicos\n");}
#define max(x,y){if(x>y) printf("%d es mayor que %d\n",y,x); else if(y>x) printf("%d es mayor que %d\n",x,y); else printf("Los valores son identicos\n");}
int main()
{
	int x; int y;
	scanf("%d",&x);
	scanf("%d",&y);
	min(x,y);
	max(x,y);
	min(x++,j++);
	max(i++,j++);
	return 0;	
}
