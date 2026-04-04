#include<iostream>
#include<vector>
using namespace std;

int issorted(vector<int>&vec,int low,int high,int target){
    int mid = (high + low)/2;
    if(vec[mid] > target){
        return issorted(vec,low,mid-1,target);
    }
    else if(vec[mid] < target){
        return issorted(vec,mid+1,high,target);
    }
    else{
        return mid;
    }
}

int main(){
    vector<int>vec = {3,14,15,20,33,42};
    int low = 0;
    int high = vec.size()-1;
    int target = 33;
    cout << issorted(vec,low,high,target);   

}