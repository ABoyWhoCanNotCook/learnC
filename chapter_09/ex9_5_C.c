#include <stdio.h>
extern int x;
void fc()
{
	x++;
	printf("fc() is called, x=%d\n", x);
}
