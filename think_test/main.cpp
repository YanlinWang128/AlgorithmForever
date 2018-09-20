#include <stdio.h>





int MaxSubSequenceSum(const int A[], int n)
{
	int ThisSum, MaxSum, i;
	ThisSum = MaxSum = 0;
	for (i = 0; i < n; i++)
	{
		ThisSum += A[i];
		if (ThisSum > MaxSum)
			MaxSum = ThisSum;
		else if (ThisSum < 0)
			ThisSum = 0;
	}
	return MaxSum;
}
int main()
{
	const int test1[] = { -2, 11, 8, -4, -1, 16, 5, 0 ,-2,3,5};
	int n = sizeof(test1) / sizeof(int);

	printf("%d\n", MaxSubSequenceSum(test1, n));
	return 0;
}