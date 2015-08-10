#include <stdio.h>

/*more fahrenheit celsius*/

#define LOWER 0
#define UPPER 300
#define STEP 20

int main ()
{
	int fahr;
	
	for (fahr = LOWER; fahr<=UPPER; fahr = fahr + STEP) {
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
	
	printf("\n"); /*line break for clarity in reading*/
	
	/*and now backwards!*/
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}

