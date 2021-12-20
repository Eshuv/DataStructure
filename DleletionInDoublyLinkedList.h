#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct DoublyLinkList
{
	DoublyLinkList* prev;
	int data;
	DoublyLinkList* next;
}NODE;

NODE* Create(int data)
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));

	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;

	return temp;
}

int CountNodes(NODE* head)
{
	int count = 0;
	NODE* temp = head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

void Print(NODE* head)
{
	NODE* temp = head;

	printf(" The Link List Nodes ");
	while (temp != NULL)
	{
		printf("%d ->", temp->data);

		temp = temp->next;
	}
	printf("\n\n");
}

NODE* AddNodeAtFront(NODE* head, int data)
{
NODE* newnode = Create(data);;
	newnode->next = head;

	if (head != NULL)
	{
		head->prev = newnode;
	}
	head = newnode;
	return head;
}

NODE* DeleteFrontNode(NODE* head)
{
	if (head == NULL)
	{
		printf("The list is Empty");
	}
	else
	{
		NODE* temp = head;
		head = head->next;
		head->prev = NULL;

		free(temp);
	}
	return head;
}

NODE* DeleteFromTheEnd(NODE* head)
{
	NODE* temp = head;
	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = temp;
	temp->prev->next = NULL;
	temp->prev = NULL;
	free(temp);

	return head;
}

NODE* DeleteAtDesiredPosition(NODE* head, int pos)
{
	NODE* temp = head;
	int i = 1;
	while (i < pos - 1)
	{
		temp = temp->next;
		i++;
	}
	temp = temp->next;
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);

	return head;
}

int main()
{
	NODE* head = NULL;

	head = AddNodeAtFront(head, 10);
	head = AddNodeAtFront(head, 20);
	head = AddNodeAtFront(head, 30);
	head = AddNodeAtFront(head, 40);
	head = AddNodeAtFront(head, 50);
	head = AddNodeAtFront(head, 60);
	head = AddNodeAtFront(head, 70);
	head = AddNodeAtFront(head, 80);
	head = AddNodeAtFront(head, 90);
	head = AddNodeAtFront(head, 100);

	Print(head);

	head = DeleteFrontNode(head);

	Print(head);

	head = DeleteFromTheEnd(head);

	Print(head);

	head = DeleteAtDesiredPosition(head, 3);

	Print(head);
}
