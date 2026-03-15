//convet 1D array to 2d array
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans(m, vector<int>(n));
        int index = 0;

        if(original.size() == m * n){
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    ans[i][j] = original[index];
                    index++;
                }
            }
            return ans;
        }
        return {};
    }
};

int main() {
    Solution sol;

    vector<int> original = {1,2,3,4,5,6};
    int m = 2, n = 3;

    vector<vector<int>> result = sol.construct2DArray(original, m, n);
    if(result.empty()) {
        cout << "Cannot construct 2D array\n";
    } else {
        for(auto &row : result){
            for(auto &val : row){
                cout << val << " ";
            }
            cout << endl;
        }
    }
}