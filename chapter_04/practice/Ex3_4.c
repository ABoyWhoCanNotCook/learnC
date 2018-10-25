// Ex3_4.c
// 输出1到50之内，所有满足x * x + y * y = z * z的勾股数，并且x < y < z
#include <stdio.h>

int main()
{
	int x, y, z;
	for(z = 3; z <= 50; z++)
		for(y = 2; y < z; y++)
			for(x = 1; x < y; x++)
				if(x * x + y * y == z * z)
					printf("%d*%d + %d*%d = %d*%d\n", x, x, y, y, z, z);
	return 0;
}
