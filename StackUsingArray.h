#pragma once

#include <stdio.h>
#include <stdlib.h>

#define N 5
int top = -1;

void Push(int stack[], int data)
{
	if (top == N - 1)
	{
		printf("This is a Overflow Condition.");
	}
	else
	{
		top++;
		stack[top] = data;
	}
}

void Pop(int stack[])
{
	int temp;
	if (top == -1)
	{
		printf("It is a Underflow Condition.");
	}
	else
	{
		temp = stack[top];
		top--;
	}
}

void Print(int stack[])
{
	printf("The value of the stack is : ");
	for (int i = top; i >= 0; i--)
	{
		printf("[%d], ", stack[i]);
	}
	printf("\n\n");
}

int main()
{

	int stack[5];

	Push(stack, 1);
	Push(stack, 2);
	Push(stack, 3);
	Push(stack, 4);
	Push(stack, 5);

	Print(stack);

	Pop(stack);
	Print(stack);

	Pop(stack);
	Print(stack);

	Pop(stack);
	Print(stack);

	Pop(stack);
	Print(stack);
}