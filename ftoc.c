#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0,20, etc to 300 */

/* integer version:
int main ()
{
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;		lower limit of temp table
	upper = 300;		upper limit
	step = 20; 		step size
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%3d %6d \n", fahr, celsius);
		fahr = fahr + step;
	}
}
*/

/*floating-point version */
int main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	printf("F \t C \n");
	while (fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f \t %6.1f\n", fahr, celsius);
		fahr = fahr +step;
	}
}