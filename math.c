#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	while (x < 5) {
		y = y + x;
		printf ("%i%i \n", x, y);
		x = x + 1;
	}
	return 0;
}