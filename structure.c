#include <stdio.h>
#include <string.h>

typedef struct {
	char name[64];
	int age;
} person;

int main()
{
	person me;

	strcpy(me.name, "Colin");
	me.age = 28;

	printf("Name: %s\n", me.name);
	printf("Age: %2d\n", me.age);
}
