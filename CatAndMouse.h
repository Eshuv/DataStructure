#pragma once

#include <stdio.h>
#include <string.h>

const char* catAndMouse(int x, int y, int z)
{
	int count1 = (z > x) ? (z - x) : (x - z);
	int count2 = (z > y) ? (z - y) : (y - z);


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
