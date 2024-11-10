#include <stdio.h>

int F(int x) 
{
	if (x == 0) {
		return 0;
	} else {
		return 2 * F(x - 1) + x * x;
	}
}

int main()
{
	int a  = 4;
	printf("F(4) is : %d\n", F(a));
	return 0;
}

