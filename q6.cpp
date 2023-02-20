 q6
 #include<bits/stdc++.h>
 using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> r;
      int i,j;
      int one,two;
      for(i=0;i<nums.size();i++){
          for(j=0;j<nums.size();j++){
              if(nums[i]+nums[j]==target && i!=j){
                  one=i;
                  two=j;
              }
          }
      }
      r.push_back(two);
      r.push_back(one);
        return r;
      }
int main(){
	   vector<int> sample{5, 15, 7, 13, 19, 78};
    int target = 12;
    vector<int> result=twoSum(sample,target);
    cout<<result[0]<<" "<<result[1]<<endl;
	return 0;
}
