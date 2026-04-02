#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 1){
        return n;
    }
    return n = n * factorial(n-1);
    
}

int main(){
    int num = 5;
    cout<< factorial(5);
}

