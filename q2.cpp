#include<bits/stdc++.h>
using namespace std;
string remove(string str){
	if(str.size()==1){
		return str;
	}
	else{
		for(int i=0; i < str.size() - 1; i++) {
        if(str[i] == str[i+1]){
            str.erase(i,2);
        }
    }
    return remove(str);

	}
}


int main(){
	
string str="Mississippi";
string final=remove(str);
cout<<final<<endl;	
	
	return 0;
}
