#include <stdio.h>

/* copy intput to output */
main()
{
	int c;
	
	c = getchar();
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}
