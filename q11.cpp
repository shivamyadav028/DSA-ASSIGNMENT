//q11
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

bool hasCycle(node *head) {
        node* slow=head;
        node* fast=head;

        if(fast==NULL || fast->next==NULL){
            return false;
        }
		//have taken fast->next=null because it will fail at any case with [1,2]
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next;
            if(fast->next!=NULL){
                fast=fast->next;
            slow=slow->next;}
            if(slow==fast){
            return true;
                        }
        }
        return false;
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
	print(head);
	if(hasCycle(head)){
		cout<<"the loop has cycle"<<endl;
	}
	else{
		cout<<"the loop does not has cycle"<<endl;
	}
	return 0;
}
