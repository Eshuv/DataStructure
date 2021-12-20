#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList
{
	int data;
	LinkedList* next;

}NODE;

NODE* Create(int data)
{
	NODE* newNode = (NODE*)malloc(sizeof(NODE));

	newNode->data = data;
	newNode->next = NULL;

	return newNode;
}

NODE* AddNewNodeAtLast(NODE* head, int data)
{
	NODE* newNode = Create(data);

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

	return head;
}

void Print(NODE* head)
{
	NODE* temp = head;
	printf("The Linked List Is \n");
	
	while (temp != NULL)
	{
		printf("%d ->", temp->data);

		temp = temp->next;
	}
	printf("\n\n");
}

NODE* DeleteFrontNode(NODE* head)
{

	if (head == NULL)
	{
		printf("Your Linked List is Empty");
	}
	else
	{
		NODE* temp = head;

		head = head->next;
		free(temp);
	}

	return head;
}

NODE* DeleteNodeAtTheEnd(NODE* head)
{
	NODE* prevNode = NULL;
	NODE* temp = head;

	while (temp->next != NULL)
	{
		prevNode = temp;
		temp = temp->next;
	}
	prevNode->next = NULL;
	free(temp);

	return head;
}

void ReverseLinkList(NODE* head)
{
	if (head == NULL)
		return;
	ReverseLinkList(head->next);
	printf("%d ->", head->data);
}

NODE* DeleteNodeAtTheDesiredPosition(NODE* head, int pos)
{
	NODE* nextNode = NULL;
	NODE* temp = head;
	int i = 1;

	while (i < pos-1)
	{
		temp = temp->next;
		i++;
	}
	nextNode = temp->next;
	temp->next = nextNode->next;
	free(nextNode);

	return head;
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
	/*
	head = DeleteFrontNode(head);

	Print(head);

	head = DeleteNodeAtTheEnd(head);

	Print(head);

	head = DeleteNodeAtTheDesiredPosition(head, 4);

	Print(head);

	head = DeleteNodeAtTheDesiredPosition(head, 4);

	Print(head);*/

	printf("\nReverse List: \n");
	ReverseLinkList(head);
}
