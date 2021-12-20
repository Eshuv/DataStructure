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
	NODE* temp = (NODE*)malloc(sizeof(NODE));

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
	//head = temp;;
	return head;
}

NODE* AddNodeAtTheDesiredPosition(NODE *head, int ind, int data)
{
	NODE* newNode = Create(data);
	NODE* temp = head;

	int len = CountNodes(head);

	if (ind < len)
	{
		for (int i = 1; i < ind - 1; i++)
		{
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
	else
	{
		printf("INVALID POSITION");
	}

	return head;
}

//void insertAfter(struct NODE* prev_node, int new_data)
//{
//    /*1. check if the given prev_node is NULL */
//    if (prev_node == NULL)
//    {
//        printf("the given previous node cannot be NULL");
//        return;
//    }
//
//    /* 2. allocate new node */
//    struct NODE* new_node = (NODE*)malloc(sizeof(NODE));
//
//    /* 3. put in the data */
//    new_node->data = new_data;
//
//    /* 4. Make next of new node as next of prev_node */
//    new_node->next = prev_node->next;
//
//    /* 5. move the next of prev_node as new_node */
//    prev_node->next = new_node;
//}

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

	AddNodeAtTheDesiredPosition(head, 5 , 100);

	Print(head);
	
}
