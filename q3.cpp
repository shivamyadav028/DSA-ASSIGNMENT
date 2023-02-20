//q3
#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
void mergeList(node* first, node* second) {
	node* dummy=new node(-1);
    node* curr = dummy;
    while (first && second) {
        curr->next = first;
        first = first->next;
        curr = curr->next;
        curr->next = second;
        second = second->next;
        curr = curr->next;
    }
    if (first) {
        curr->next = first;
    }
    if (second) {
        curr->next = second;
    }
}
node* reverse(node *&head)
{
	node *prev = NULL;
	node *curr = head;
	node *next = NULL;
	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	return head;
}
void reorder(node* &head){
	node* slow=head;
	node* fast=head;
	while(fast->next!=NULL){
		fast=fast->next;
		if(fast->next!=NULL){
			fast=fast->next;
		}
		slow=slow->next;
	}
	node* second = slow->next;
    slow->next = NULL;
    second=reverse(second);
    mergeList(head, second);
	
}


void insertAtHead(node *&head, int d)
{
	node *temp = new node(d);
	temp->next = head;
	head = temp;
}

void print(node *&head)
{
	node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}
int main()
{
	node *head = NULL;
	int size;
	int k;
	cout << "enter size : ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> k;
		insertAtHead(head, k);
	}
	reorder(head);
	print(head);
	return 0;
}
	
