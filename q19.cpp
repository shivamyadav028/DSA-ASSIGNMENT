#include <bits/stdc++.h>
using namespace std;

void reverseFirstK(queue<int> &q, int k) {
    stack<int> s;

    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    for (int i = 0; i < q.size() - k; i++) {
        int item = q.front();
        q.pop();
        q.push(item);
    }
}

int main() {
    queue<int> q;
    for(int i = 1; i <= 10; i++)
        q.push(i);

    int k;
    cout << "Enter k: ";
    cin >> k;

    reverseFirstK(q, k);
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}

