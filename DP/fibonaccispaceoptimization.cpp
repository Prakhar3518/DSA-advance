#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;

    if(n <= 1){
        cout << n;
    }
    int prev2 = 0;
    int prev = 1;
    int ans;

    for(int i = 2 ; i <= n ; i++){
        ans = prev + prev2;
        prev2 = prev;
        prev = ans;
    }
    cout << ans;
}