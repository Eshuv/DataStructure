#pragma once

#include <stdio.h>

int JumpingOnClouds(int n, int c[])
{
	int count = 0;
	int i = 0;
	while (i < n)
	{
		if (c[i + 1] == 1)
		{
			i = i + 1;
			count++;
		}
		else
		{
			if (c[i + 1] == 0)
			{
				if (c[i + 2] == 0)
				{
					i = i + 1;
				}
				count++;
			}
		}
		i++;
	}
	printf("%d", count);
	return count;
}

int main()
{
	int const n = 9;
	int c[n] = { 0,1,0,1,0,1,0,1,0 };

	JumpingOnClouds(n, c);

}
