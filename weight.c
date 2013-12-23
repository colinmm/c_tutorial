#include <stdio.h>
#include <stdlib.h>
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

int main(int argc,char *argv[])
{
	int us_pounds;

	if(argc != 2)
	{
		printf("Usage: convert weight_in_pounds\n");
		exit(1);
	}
	
	sscanf(argv[1], "%d", &us_pounds); /* Convert String to int */

	/*printf("Weight in Pounds: ");
	scanf("%d", &us_pounds);	*/

	printf("US lbs	Stone  lbs	Kilo\n");
	print_converted(us_pounds);
}
