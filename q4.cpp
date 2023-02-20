//q4
#include <bits/stdc++.h>
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

void insertAtHead(node *&head, int d)
{
	node *temp = new node(d);
	temp->next = head;
	head = temp;
}
node* insertAtLast(node* &head, int d)
{
	node *temp1 = new node(d);
	node *temp = head;
	if(head==NULL){
		head=temp1;
		return head;
		
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = temp1;
	return head;
}
node* RootElement(node* head) {
    int n = 0;
    node* current = head;
    while (current) {
        current = current->next;
        n++;
    }
    double root_n = pow(n, 0.5);
    int index = floor(root_n);
    current = head;
    for (int i = 1; i <index; i++) {
        current = current->next;
    }
    return current;
}

void print(node *&head)
{
	node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout<<""<<endl;
}
int main()
{
	node *head = NULL;
	int size;
	int k;
	cout << "enter size : ";
	cin >> size;
	for (int i = 1; i <=size; i++)
	{
		cin>>k;
		insertAtLast(head,k);
	}
	print(head);
	node* newNode = RootElement(head);
	cout << "The root(n)th element is: " << newNode->data<<endl;
	return 0;
}
