#pragma once


/*
	MaxSubSequenceSum:	最大子序列求和
	给定(可能有负数)整数序列A1, A2, A3..., An, 求这个序列中子序列和的最大值。
	（为方便起见，如果所有整数均为负数，则最大子序列和为0)
	例如: -2, 11, 8, -4, -1, 16, 5, 0  则输入答案为35,即从A2~A6
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