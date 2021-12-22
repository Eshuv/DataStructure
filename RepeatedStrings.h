#pragma once

#include <stdio.h>
#include <string.h>

int RepeatedString(char str[], int long n)
{
	int sz = strlen(str);	
	int long count = 0;
	int long times = n / sz;
	int remain = n % sz;
	for (int i = 0; i < sz; i++)
	{
		if (str[i] == 'a')
		{
			count++;
		}
	}
	count = count * times;
	for (int i = 0; i < remain; i++)
	{
		if (str[i] == 'a')
		{
			count++;
		}
	}
	printf("%d", count);
	
	return count;
}

int main()
{
	int long const n = 10;
	char str[n] = "abcac";

	RepeatedString(str, n);
}
