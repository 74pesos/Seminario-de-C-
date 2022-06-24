#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if((argc>1))
	{
		if(argc==3)
		{
			int first=atoi(argv[1]);
			int last=atoi(argv[2]);
			for(int i=first;i<=last;i++) printf("%d\n",i);
		}
		else
		{
			if(argc==2)
			{
				int last=atoi(argv[1]);
				for(int i=1;i<=last;i++) printf("%d\n",i);
			}
		}
	}
	else return 1;
	return 0;
}
