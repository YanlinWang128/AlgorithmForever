#pragma once



/*
	冒泡排序

*/
void BubbleSort(int A[], int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (A[j] > A[j + 1])
			{
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}

		}
	}  // 数组的操作,不需要返回,指针直接针对地址进行操作 
}

