# include <stdio.h>
#include "sort.h"
#include "Sequence.h"   

int main()
{
	int test[] = { 6, 5, 3, 1, 8, 7, 2, 4, 0 };
	int length = sizeof(test) / sizeof(int);  // Array length 

	const int test1[] = { -2, 11, 8, -4, -1, 16, 5, 0 };
	int n = sizeof(test1) / sizeof(int);


	BubbleSort(test, length);
	printf("%d\n", MaxSubSequenceSum(test1, n));
	//	printf("%d\n",sizeof(test));
	for (int i = 0; i < length; i++) {
		printf("%d ", test[i]);

	}

}