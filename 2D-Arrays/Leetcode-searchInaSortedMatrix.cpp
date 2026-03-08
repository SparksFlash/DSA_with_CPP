#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int start = 0, end = matrix[0].size() - 1;
        for(int i = 0; i < n; i++){
            while(start <= end){
                int mid = (start + end) / 2;
                if(matrix[i][mid] == target)
                    return true;
                else if(matrix[i][mid] > target)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
        }
        return false;
    }
};

int main() {
    Solution obj;
    vector<vector<int>> matrix = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    int target = 3;
    if(obj.searchMatrix(matrix, target))
        cout << "Found";
    else
        cout << "Not Found";
}