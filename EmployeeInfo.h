#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define size 10

typedef struct EMPInfo
{
	char name[20];
	char address[100];
	int age;
	int empId;
	char Sex;
}EMP;

EMP * MemoryAllocation()
{
	EMP* ptr = (EMP*)malloc(size * sizeof(EMP));
	return ptr;
}

void Create(EMP *ptr)
{
	//EMP* ptr = *Fptr;

	for (int i = 0; i < size; i++)
	{
		strcpy_s((ptr + i)->name, "Abhay Gautam");
		strcpy_s((ptr + i)->address, "B-5/294 Raghunath Puri Extn. Near Tigri Chowk Ghaziabad");
		(ptr + i)->age = 21;
		(ptr + i)->empId = 003;

		if (i % 2 == 0)
		{
			(ptr + i)->Sex = 'M';
		}
		else
		{
			(ptr + i)->Sex = 'F';
		}
	}
}

void Print(EMP *obj)
{
	for (int i = 0; i < size; i++)
	{
		printf("\n The Employee Name is : %s \n The Employee Address is : %s \n The Employee Age is : %d \n The Employee Id is : %d \n The Employee Sex is : %c \n",
			obj->name, obj->address, obj->age, obj->empId, obj->Sex);

		obj++;

		printf("--------------------------------------Next Employee-----------------------------------------");
	}
}

int main()
{
	EMP* Info = NULL;
	Info = MemoryAllocation();
	Create(Info);
	Print(Info);

	free(Info);
	Info = NULL;
}