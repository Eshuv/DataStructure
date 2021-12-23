#pragma once

#include <stdio.h>
#include <string.h>

const char* catAndMouse(int x, int y, int z)
{
	int count1 = 0;
	int count2 = 0;
	while (z != x)
	{
		if (z > x)
		{
			x++;
		}
		else
		{
			x--;
		}
		count1++;
	}
	
	while (z != y)
	{
		if (z > y)
		{
			y++;
		}
		else
		{
			y--;
		}
		count2++;
	}
	if (count1 > count2)
	{
		return "Cat B";
	}
	if (count2 > count1)
	{
		return "Cat A";
	}
	
	return "Mouse C";
	
		
}

int main()
{
	int x = 1;
	int y = 3;
	int z = 2;

	printf("%s", catAndMouse(x, y, z));
}
