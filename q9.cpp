//q9
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
node* reverse(node* head, int k)
{
    if (!head)
        return NULL;
    node* current = head;
    node* next = NULL;
    node* prev = NULL;
    int count = 0;

    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if (next != NULL)
        head->next = reverse(next, k);

    return prev;
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
cout<<"enter the value of d"<<endl;
    cin >> d;

    node* newHead = reverse(head, d);
    print(newHead);

	return 0;
}
	
