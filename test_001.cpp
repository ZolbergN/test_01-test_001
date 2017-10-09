#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node * next;
};

class List
{
	Node *Head;
public:
	List() { 
		Head = NULL; 
	}
	~List();
	void Add(int x);
	void Show();
	Node * reverse(Node * head);
};

List::~List()
{
	while (Head != NULL)
	{
		Node *tmp = Head->next;
		delete Head;
		Head = tmp;
	}
}

void List::Add(int x)
{
	Node *tmp = new Node;
	tmp->data = x;
	tmp->next = Head;
	Head = tmp;
}

void List::Show()
{
	Node *tmp = Head;
	while (tmp != NULL)
	{
		cout << tmp->data << "";
		tmp = tmp->next;
	}
}
Node * List::reverse(Node * head)
{
	Node *rev = NULL;
	for (Node *node = head, *next_n; node != NULL; node = next_n)
	{
		next_n = node->next;
		node->next = rev;
		rev = node;
	}
	return rev;
}

int main()
{
	return 0;
}
