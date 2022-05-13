#include <stdio.h>
int main()
{
	int c;
	c=getchar();
	while(c!=EOF)
	{
		switch(c)
		{
			case '\n':
				printf("\\n");
				break;
			case '\t':
				printf("\\t");
				break;
			case '\\':
				printf("\\\\");
				break;
			default:
				printf("%c",c);
		}
		c=getchar();
	}
	return 0;
}
