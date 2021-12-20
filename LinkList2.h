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
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->num = data;
	temp->next = NULL;

	return temp;
}

NODE* AddNewNodeAtLast(NODE* head, int data)
{
	NODE* newNode = CreateNode(data);
	
	if (head == NULL)
	{		
		return newNode;
	}

	NODE* temp = head;
	while (temp->next != NULL)
	{		
		temp = temp->next;
	}
	temp->next = newNode;
	//head = temp;;
	return head;
}

//int CountNodes(NODE* head)
//{
//	int count = 0;
//	NODE* temp = head;
//	while (temp != NULL) 
//	{
//		count++;
//		temp = temp->next;
//	}
//	return count;
//}

void Print(NODE* head)
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

	head = AddNewNodeAtLast(head, 10);
	head = AddNewNodeAtLast(head, 20);
	head = AddNewNodeAtLast(head, 30);
	head = AddNewNodeAtLast(head, 40);
	head = AddNewNodeAtLast(head, 50);
	head = AddNewNodeAtLast(head, 60);
	head = AddNewNodeAtLast(head, 70);
	head = AddNewNodeAtLast(head, 80);
	head = AddNewNodeAtLast(head, 90);
	head = AddNewNodeAtLast(head, 100);
	

	Print(head);
}