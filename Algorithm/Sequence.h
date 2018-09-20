#pragma once


/*
	MaxSubSequenceSum:	������������
	����(�����и���)��������A1, A2, A3..., An, ����������������к͵����ֵ��
	��Ϊ����������������������Ϊ����������������к�Ϊ0)
	����: -2, 11, 8, -4, -1, 16, 5, 0  �������Ϊ35,����A2~A6
*/

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