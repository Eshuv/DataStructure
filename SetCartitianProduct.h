#pragma once

#include <stdio.h>

void CartesianProduct(int arr1[],int arr2[])
{
	printf("{");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("{%d,%d}",arr1[i],arr2[j]);
		}
	}
	printf("}");
}

int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };

	CartesianProduct(arr1, arr2);
}
