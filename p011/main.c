#include <stdio.h>

void printOut(unsigned int N)
{
	if ( N >= 10) {
		printOut( N / 10);
	}
		printf("%d\n", ( N % 10));
}

int main()
{
	int a = 1204;
	printOut(a);

	return 0;
}
