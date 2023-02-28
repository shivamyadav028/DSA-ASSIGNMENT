#include<bits/stdc++.h>
using namespace std;
class myQueue{
	stack<int> s1;
	stack<int> s2;
	public:
	void push(int d){
		cout<<"inserting "<<d<<endl;
	s1.push(d);	
	}
	
int pop(){
	while(!s1.empty()){
		s2.push(s1.top());
		s1.pop();
	}
	int ans=s2.top();
	s2.pop();
	while(!s2.empty()){
		s1.push(s2.top());
		s2.pop();
}
	return ans;
	
}	
	
};
int main(){
	myQueue q;
	q.push(78);
	q.push(90);
	q.push(101);
	int k=q.pop();
	cout<<" the pop element is "<<k<<endl;
	
	
	return 0;
}

