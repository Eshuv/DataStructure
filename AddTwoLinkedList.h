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

NODE* AddTwoLinkedList(NODE* head1, NODE* head2)
{
	NODE* temp = head1;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = head2;

	return head1;
}

void Sorting(NODE* head)
{
	NODE* ptr, * cpt;
	int temp;
	ptr = head;

	while (ptr->next != NULL)
	{
		cpt = ptr->next;
		while (cpt->next != NULL)
		{
			if (ptr->num > cpt->num)
			{
				temp = ptr->num;
				ptr->num = cpt->num;
				cpt->num = temp;
			}
			cpt = cpt->next;
		}
		ptr = ptr->next;
	}
}

NODE* MiddleNode(NODE* head)
{
	NODE* slow = head;
	NODE* fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	printf("The Middle Node Is : %d\n\n", slow->num);
	return slow;
}

NODE* DeleteAllNode(NODE* head)
{
	while (head != NULL)
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
	}

	return head;
}

NODE* AddLinkedListAlternatively(NODE* head1, NODE* head2)
{
	NODE* temp1;
	NODE* temp2;
	NODE* first = head1;
	NODE* second = head2;

	while (head1 != NULL && head2 != NULL)
	{
		temp1 = head1->next;
		head1->next = head2;
		head1 = temp1;

		temp2 = head2->next;
		head2->next = temp1;
		head2 = temp2;
	}
	second = head2;

	return head1;
}

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
	NODE* head1 = NULL;
	NODE* head2 = NULL;
	NODE* head = NULL;

	head1 = AddNewNodeAtLast(head1, 1);
	head1 = AddNewNodeAtLast(head1, 3);
	head1 = AddNewNodeAtLast(head1, 5);
	head1 = AddNewNodeAtLast(head1, 7);
	head1 = AddNewNodeAtLast(head1, 9);

	Print(head1);

	head2 = AddNewNodeAtLast(head2, 2);
	head2 = AddNewNodeAtLast(head2, 4);
	head2 = AddNewNodeAtLast(head2, 6);
	head2 = AddNewNodeAtLast(head2, 8);
	head2 = AddNewNodeAtLast(head2, 10);

	Print(head2);

	head = AddTwoLinkedList(head1, head2);

	Print(head);

	Sorting(head);

	Print(head);

	head = MiddleNode(head);

	//head = DeleteAllNode(head);

	//Print(head);

	head = AddLinkedListAlternatively(head1, head2);

	Print(head);
}
