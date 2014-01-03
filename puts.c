#include <stdio.h>

// Repeats input in new line
int main()
{
	// Input can include max 256 characters
	char line[256];

	while(gets(line) != NULL) 	// Read line
	{
		puts(line); 			// Print line
		printf("\n");			// Print blank line
	}
}