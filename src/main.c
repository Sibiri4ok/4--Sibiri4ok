#include <stdio.h>

void other()
{
	fprintf(stderr, "other");
}

void input()
{
	char buffer[20];
	scanf("%s", buffer);	
}

int main()
{
	input();

	return 0;
}