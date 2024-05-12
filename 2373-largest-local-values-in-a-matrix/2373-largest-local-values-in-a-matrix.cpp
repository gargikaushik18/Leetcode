
#include <vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
         int n = grid.size();
    vector<vector<int>> maxLocal;
    
    // Iterate over the submatrices
    for (int i = 0; i < n - 2; ++i) {
        vector<int> maxLocalRow;
        for (int j = 0; j < n - 2; ++j) {
            // Find the maximum value in the current submatrix
            int maxVal = max({
                max(grid[i][j], grid[i][j + 1]), grid[i][j + 2],
                max(grid[i + 1][j], grid[i + 1][j + 1]), grid[i + 1][j + 2],
                max(grid[i + 2][j], grid[i + 2][j + 1]), grid[i + 2][j + 2]
                } );
            maxLocalRow.push_back(maxVal);
        }
        maxLocal.push_back(maxLocalRow);
    }
    
    return maxLocal;
    }
};