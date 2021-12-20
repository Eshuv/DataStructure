#pragma once

#include <stdio.h>
#include <string.h>

int CountingValley(int n, char str[])
{
	int count = 0;
	int level = 0;

	for (int i = 0; i < n; i++)
	{
		if (str[i] == 'U')
		{
			level++;
			if (level == 0)
			{
				count++;
			}
		}
		if (str[i] == 'D')
		{
			level--;
		}		
	}
	printf("%d", count);
	return count;
}

int main()
{
	int const n = 9;
	char str[n]= "UDDDUDUU";

	CountingValley(n, str);
}
