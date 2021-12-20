#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct CircularLinkedListNode
{
	int data;
	CircularLinkedListNode* next;
}NODE;

void CreateNode(int data)
{
	NODE* newNode = (NODE*)malloc(sizeof(NODE));

	newNode->data = data;
	newNode->next = NULL;
}

void AddNodeAtTheFront(NODE* head, int data)
{
	NODE* newNode = CreateNode(data);

	newNode->next = head;
	head = newNode;

	return head;
}

void Print(NODE* head)
{

}

int main()
{

}
