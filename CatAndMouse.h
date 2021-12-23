#pragma once

#include <stdio.h>
#include <string.h>

const char* catAndMouse(int x, int y, int z)
{
	int count1 = 0;
	int count2 = 0;

	if (z > x)
	{
		count1 = z - x;
	}
	else
	{
		count1 = x - z;
	}

	if (z > y)
	{
		count2 = z - y;
	}
	else
	{
		count2 = y - z;
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
	int y = 2;
	int z = 3;

	printf("%s", catAndMouse(x, y, z));
}
