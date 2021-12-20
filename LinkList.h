#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct SINGLY_LINKLIST
{
	int num;
	SINGLY_LINKLIST* next;
}NODE;

NODE* CreateNode(int data)
{
	static NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->num = data;
	temp->next = NULL;

	return temp;
}

NODE* AddNewNode(NODE *head, int data)
{
	NODE* newNode = CreateNode(data);

	newNode->next = head;
	head = newNode;

	return head;
}

void Print(NODE *head)
{
	NODE* temp = head;

	printf(" The Link List Nodes ");
	while (temp != NULL)
	{
		printf("%d ->", temp->num);

		temp = temp->next;
	}
	printf("\n\n");
}

int main()
{
	NODE* head = NULL;

	head = AddNewNode(head, 10);
	head = AddNewNode(head, 20);
	head = AddNewNode(head, 30);
	head = AddNewNode(head, 40);
	head = AddNewNode(head, 50);
	head = AddNewNode(head, 60);
	head = AddNewNode(head, 70);
	head = AddNewNode(head, 80);
	head = AddNewNode(head, 90);
	head = AddNewNode(head, 100);

	Print(head);
}