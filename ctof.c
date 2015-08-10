#include <stdio.h>

/*print Celsius-to-Fahrenheit conversion table*/

int main()
{
	float cs, ft;
	int lower, upper, step;
	
	/* upper and lower bounds of table, # degrees to step by*/
	lower = 0;
	upper = 20;
	step = 2;
	
	cs = lower;
	while (cs <= upper){
		ft = (cs + 32) * (9.0/5.0);
		printf("%2.0f %6.1f \n", cs, ft);
		cs = cs+step;
	}
}

	