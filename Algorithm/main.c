# include <stdio.h>
#include "algorithm.h"


int main()
{
	int test[] = { 6, 5, 3, 1, 8, 7, 2, 4, 0 };
	int length = sizeof(test) / sizeof(int);  // Array length 

	BubbleSort(test, length);

	//	printf("%d\n",sizeof(test));
	for (int i = 0; i < length; i++) {
		printf("%d ", test[i]);
	}

}