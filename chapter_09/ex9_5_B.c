#include <stdio.h>
extern int x;
void fb()
{
	x++;
	printf("fb() is called, x=%d\n", x);
}
