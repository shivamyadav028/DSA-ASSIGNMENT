//q1
#include<bits/stdc++.h>
using namespace std;

void replace(int arr[], int n){
    int max;
    int x;
    int y;
    for(x=0;x<n-1;x++){
        max=INT_MAX;
        for(y=x+1;y<n;y++){
            if((max > (arr[y] - arr[x])) && ((arr[y] - arr[x]) > 0)){
                max=arr[y] - arr[x];
            }
        }
        if(max!=INT_MAX){
        arr[x]=arr[x]+max;
        }
    }
}

int main(){
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
	cout<<"Enter a element "<<i<<" in array"<<endl;
        cin>>arr[i];}
    replace(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
