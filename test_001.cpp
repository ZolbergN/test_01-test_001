#include <iostream>

using namespace std;

struct Node {
	int data;
	Node * next;
};
Node *head = NULL;

Node * reverse(Node * head) {
	struct Node *ptr = NULL, *tmp;
	while (head)
	{
		tmp = head->next;
		head->next = ptr;
		ptr = head;
		head = tmp;
	}
	return ptr;
}
void insertEnd(int d)
{
	Node *ptr = new Node();
	ptr->data = d;
	ptr->next = NULL;

	if (head == NULL)
		head = ptr;
	else
	{
		Node *temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;

	}

}

void displayList()
{
	Node *ptr = head;
	while (ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	cout << "\n";
}

int main()
{
	return 0;
}
