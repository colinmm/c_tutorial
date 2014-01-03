#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int number;

	if(argc != 2)
	{
		printf("Usage: Return fibonacci value of a number\n");
		exit(0);
	}

	sscanf(argv[1], "%d", &number);

	fib(number);
	printf("Success!\n");
}

/* Fibonacci value of a number */
int fib(int num)
{
	switch(num) {
	case 0:
		return(0);
		break;
	case 1:
		return(1);
		break;
	/* Including recursive calls */
	default:
		return(fib(num - 1) + fib(num - 2));
		break;
	}
	
	printf(num);
}
