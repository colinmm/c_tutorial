#include <stdio.h>
#include <ctype.h>

// Return typed characters converted to UPPERCASE
// EOF triggered by control+d
int main()
{
	int ch;

	while((ch = getchar()) != EOF)
		putchar(toupper(ch));
}