#include<iostream>
#include<vector>
using namespace std;

bool issorted(vector<int>&vec,int i){
    if(i == vec.size()-2){
        if(vec[i] <= vec[i+1]){
            return true;
        }
        else{
            return false;
        }
    }
    if(vec[i+1] < vec[i]){
        return false;
    }
    
    return issorted(vec,i+1);
}

int main(){
    vector<int>vec = {1,2,3,4,5};
    int i = 0;
    cout << issorted(vec,i);   

}