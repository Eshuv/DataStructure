#pragma once

#include <stdio.h>

int getMoneySpent(int n, int keyboards[], int m, int drives[], int b)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if ((keyboards[i] + drives[j]) > count)
			{
				if ((keyboards[i] + drives[j]) <= b)
				{
					count = (keyboards[i] + drives[j]);
				}
			}
		}
	}

	if (count == 0)
	{
		return -1;
	}
	else
	{
		return count;
	}
}


int main()
{
	int b = 5;
	int const n = 1;
	int const m = 1;
	int keyboards[n] = { 4 };
	int drives[m] = { 5 };

	int ret = getMoneySpent(n, keyboards, m, drives, b);
	printf("%d", ret);
}
