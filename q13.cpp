#include <bits/stdc++.h>
using namespace std;

class TwoStacks {
    int *arr;
    int top1, top2;
    int size;
public:
    TwoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    void push1(int x) {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = x;
        }
        else {
            cout << "Stack Overflow" << endl;
        }
    }

    void push2(int x) {
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = x;
        }
        else {
            cout << "Stack Overflow" << endl;
        }
    }

    int pop1() {
        if (top1 >= 0) {
            int x = arr[top1];
            top1--;
            return x;
        }
        else {
            cout << "Stack Underflow" << endl;
            return -1;
        }
    }

    int pop2() {
        if (top2 < size) {
            int x = arr[top2];
            top2++;
            return x;
        }
        else {
            cout << "Stack Underflow" << endl;
            return -1;
        }
    }
};

int main() {
    TwoStacks s(5);
    s.push1(5);
    s.push2(6);
    s.push1(30);
    s.push2(56);
    s.push1(51);
    s.push2(63);
    cout << s.pop1() << endl;
    cout << s.pop2() << endl;
    cout << s.pop1() << endl;
    cout << s.pop2() << endl;
    cout << s.pop1() << endl;
    cout << s.pop2() << endl;
    return 0;
}

