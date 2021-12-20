#pragma once
#include <stdio.h>

int main()
{
	char firstname[10];
	char lastname[10];

	printf("Enter The Name : ");

	scanf_s("%s%s",firstname,lastname);
	printf("%s %s", firstname, lastname);
}
