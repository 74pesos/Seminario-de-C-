#include <stdio.h>
int main()
{
	int c;
	c=getchar();
	while(c!=EOF)
	{
		if(c==' ')
		{
			while(c==' ') c=getchar();
			printf(" ");
				
		}
		printf("%c",c);
		c=getchar();
	}	
	return 0;
}
