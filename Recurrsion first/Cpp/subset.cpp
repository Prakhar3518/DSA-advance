#include<iostream>
#include<vector>

vector<int>subset(vector<int>&vec,int i,vector<int>ans){
    ans.push_back(vec[i]);
    subset(vec,i+1,ans);
    ans.pop_back();
    subset(vec,i+1,ans);
}

int main(){
    vector<int>vec1 = {1,2,3,4,5};
    vector<vector<int>>ans;
    int i = 0;
    
    cout<<subset(vec1,i,ans);


}