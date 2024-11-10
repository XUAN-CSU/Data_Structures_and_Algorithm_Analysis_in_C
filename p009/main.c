#include <stdio.h>

int bad( unsigned int N)
{
	if ( N == 0) {
		return 0;
	} else {
		return bad( N / 3 + 1) + N - 1;
	}
}

int main()
{
	int a = 1;
	printf("bad(1) is : %d\n", bad(a));
	return 0;
}

