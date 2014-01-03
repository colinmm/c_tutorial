#include <stdio.h>

// Return the next character of keyboard input as an int
// EOF triggered by control+d
int main() 
{
	int ch, i = 0;

	while((ch = getchar()) != EOF)
		i++;

	printf("%d\n", i);
}