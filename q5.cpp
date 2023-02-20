//q5
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
node* modularNode(node* head, int data) {
    if(data <= 0 || head == NULL)
        return NULL;

    int i = 1;
    node* modularNode = NULL;
    for(node* temp = head; temp != NULL; temp = temp->next) {
        if(i%data == 0)
            modularNode = temp;
        i++;
    }
    return modularNode;
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
		insertAtLast(head, k);
	}
	int d;
	cout<<"enter a modular node "<<endl;
	cin>>d;
	node* newNode = modularNode(head, d);
	cout << "Modular node from end for d = " << d << ": " << newNode->data;

	return 0;
}
	
