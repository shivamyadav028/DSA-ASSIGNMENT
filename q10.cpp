#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode* next;
        ListNode(int x) : val(x), next(NULL) {}
};

class LinkedList {
    public:
        ListNode* head;
        ListNode* tail;

        LinkedList() {
            head = NULL;
            tail = NULL;
        }

        void insert(int data) {
            ListNode* temp = new ListNode(data);
            if(head == NULL){
                head = temp;
                tail = temp;
            } else {
                tail->next = temp;
                tail = temp;
            }
        }

        void print(ListNode* head) {
            ListNode* temp = head;
            while(temp) {
                cout << temp->val << " -> ";
            }
            cout << "NULL";
        }
};

ListNode* getIntesectionNode(ListNode* head1, ListNode* head2)
{
    while (head2) {
        ListNode* temp = head1;
        while (temp) {
            // if both Nodes are same
            if (temp == head2)
                return head2;
            temp = temp->next;
        }
        head2 = head2->next;
    }
    // intersection is not present between the lists
    return NULL;
}
int main() {
    LinkedList list1, list2;

    list1.insert(10);
    list1.insert(20);
    list1.insert(30);
    list1.insert(40);
    list1.insert(50);
    list1.insert(60);
    list2.insert(70);
    list2.insert(80);

    list2.head->next = list1.head->next->next;
    ListNode* ans = getIntesectionNode(list1.head, list2.head);
    ans==NULL ?cout << "NULL":cout << "Intersection at node: " << ans->val;


    return 0;
}

