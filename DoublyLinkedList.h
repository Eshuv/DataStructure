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

NODE* AddAtTheEnd(NODE* head, int data)
{
	NODE* newnode = Create(data);
	if (head == NULL)
	{
		head = newnode;
		return newnode;
	}
	NODE* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;

	return head;
}

NODE* AddAtDesiredPosition(NODE* head, int pos, int data)
{
	NODE* newnode = Create(data);
	NODE* temp = head;
	int len = CountNodes(head);

	if (pos < len)
	{
		for (int i = 1; i < pos - 1; i++)
		{
			temp = temp->next;
		}
		newnode->prev = temp;
		newnode->next = temp->next;
		temp->next = newnode;
		newnode->next->prev = newnode;
	}
	return head;
}

void ReverseTheLinkedList(NODE* head)
{
	NODE* temp = head;
	printf("\nReversing Doubly List \n");
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	while (temp != NULL)
	{
		printf("%d ->", temp->data);
		temp = temp->prev;
	}

	//return temp;
}

void Print(NODE* head)
{
	NODE* temp = head;

	printf("\nThe Link List Nodes ");
	while (temp != NULL)
	{
		printf("%d ->", temp->data);

		temp = temp->next;
	}
	printf("\n\n");
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
	ReverseTheLinkedList(head);
	Print(head);

	head = AddAtTheEnd(head, 110);
	head = AddAtTheEnd(head, 120);
	head = AddAtTheEnd(head, 130);
	head = AddAtTheEnd(head, 140);
	head = AddAtTheEnd(head, 150);
	head = AddAtTheEnd(head, 160);
	head = AddAtTheEnd(head, 170);
	head = AddAtTheEnd(head, 180);
	head = AddAtTheEnd(head, 190);
	head = AddAtTheEnd(head, 200);

	Print(head);	

	head = AddAtDesiredPosition(head, 3, 210);
	head = AddAtDesiredPosition(head, 3, 220);
	head = AddAtDesiredPosition(head, 3, 230);
	head = AddAtDesiredPosition(head, 3, 240);
	head = AddAtDesiredPosition(head, 3, 250);
	head = AddAtDesiredPosition(head, 3, 260);
	head = AddAtDesiredPosition(head, 3, 270);
	head = AddAtDesiredPosition(head, 3, 280);
	head = AddAtDesiredPosition(head, 3, 290);
	head = AddAtDesiredPosition(head, 3, 300);

	ReverseTheLinkedList(head);
	Print(head);



	printf("\n\n");
}
