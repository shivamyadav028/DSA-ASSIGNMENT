#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> findPairs(vector<int>& v) {
    vector<pair<int,int>> vp;
    stack<int> s;

    for(int i = 0; i < v.size(); i++) {
        if(s.empty())
            s.push(v[i]);
        else if(!s.empty()){
            bool chk = abs(s.top() - v[i]) == 1;
            if(chk){
                vp.push_back(make_pair(s.top(), v[i]));
                s.pop();
            }
            else
                s.pop();
        }
    }
    return vp;
}

int main() {
    vector<int> v{4, 5, -2, -3, 11, 10, 5, 6, 20};
    vector<pair<int,int>> ans = findPairs(v);
    
    cout << "Consecutive Pairs: " << endl;
    for(int i = 0; i < ans.size(); i++) {
        cout << "(" << ans[i].first <<"," << ans[i].second << ")" << endl;
    }
    return 0;
}

