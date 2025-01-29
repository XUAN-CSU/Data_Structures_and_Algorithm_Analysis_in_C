// This is for the maximum subsequence
#include <stdio.h>
#include <limits.h>

int maxSubArraysum(int nums[], int size, int *start, int *end)
{
	int max_current = nums[0];
	int max_global 	= nums[0];

	*start  = *end 	= 0;
	int tmp_start 	= 0;

	for (int i = 1; i < size; ++i) {
		if (nums[i] > max_current + nums[i]) {
			max_current = nums[i];
			tmp_start = i;
		} else {
			max_current += nums[i];
		}

		if (max_current > max_global) {
			max_global = max_current;
			*start = tmp_start;
			*end = i;
		}
	}

	return max_global;
}

int main()
{
	int arr[] = {-2, 4, 2, 1, -5, 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	int start = 0;
	int end = 0;
	int sum = maxSubArraysum(arr, size, &start, &end);

	printf("The sum is %d\n", sum);
	printf("The start is %d, the end is %d\n", start, end);

	return 0;
}

