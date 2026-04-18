#include <iostream>
#include <vector>
using namespace std;

void subset(vector<int>& vec, int i, vector<int>& temp, vector<vector<int>>& ans) {
    // Base case
    if (i == vec.size()) {
        ans.push_back(temp);
        return;
    }

    // Include current elements
    temp.push_back(vec[i]);
    subset(vec, i + 1, temp, ans);

    // Exclude current element
    temp.pop_back();
    subset(vec, i + 1, temp, ans);
}

int main() {
    vector<int> vec1 = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;

    subset(vec1, 0, temp, ans);

    for (int i = 0; i < ans.size(); i++) {        // loop over all subsets
    cout << "{ ";
    for (int j = 0; j < ans[i].size(); j++) { // loop inside each subset
        cout << ans[i][j] << " ";
    }
    cout << "}" << endl;
}

    return 0;
}