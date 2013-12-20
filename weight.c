#include <stdio.h>
#define KILOS_PER_POUND .45359

void print_converted(int pounds)
/* Convert US Weight to Imperial and International Units. Print the results */
{
	int stones = pounds /14;
	int uklbs = pounds % 14;
	float kilos_per_pound = 0.45359;
	float kilos = pounds * kilos_per_pound;

	printf("%3d	%2d	%2d	%6.2f\n",
		pounds, stones, uklbs,  kilos); 
}

int main()
{
	int us_pounds;

	printf("Weight in Pounds: ");
	scanf("%d", &us_pounds);	

	printf("US lbs	Stone  lbs	Kilo\n");
	print_converted(us_pounds);
}
