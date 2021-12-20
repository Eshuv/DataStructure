#pragma once

#include <stdio.h>

void BubbleSort(int arr[], int sz)
{
	int temp;
	int i,j;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int PairofSocks(int arr[], int sz)
{
	int count = 0;
	int pair = 0;

	for (int i = 0; i < sz; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			count++;
		}
	}
	pair = count / 2;
	printf("\nThe pair of socks the merchant can sell are : %d", pair);
	

	return pair;
}

void Print(int arr[], int sz)
{
	printf("Your arrayy is : ");
	for (int i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	Print(arr, sz);

	BubbleSort(arr, sz);

	Print(arr, sz);

	PairofSocks(arr, sz);
}
