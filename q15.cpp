#include <bits/stdc++.h>
using namespace std;

class Stack {
    queue<int> queue1;
    queue<int> queue2;

public:
    void push(int x) {
    	cout<<"pushing "<<x<<" into queue"<<endl;
        queue1.push(x);
    }

    int pop() {
        if (queue1.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        while (queue1.size() > 1) {
            queue2.push(queue1.front());
            queue1.pop();
        }
        int x = queue1.front();
        queue1.pop();
        while (!queue2.empty()) {
            queue1.push(queue2.front());
            queue2.pop();
        }
        return x;
    }
};

int main() {
    Stack s;
    s.push(12);
    s.push(25);
    s.push(3);
    s.push(4);
	s.pop();
    return 0;
}

