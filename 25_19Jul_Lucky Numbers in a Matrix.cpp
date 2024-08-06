#include <bits/stdc++.h>
class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        vector<int> lucky;
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0; i < n; ++i)
        {
            int minRow = INT_MAX;
            int minRowIndex = -1;
            // Find the minimum element in the current row
            for (int j = 0; j < m; ++j)
            {
                if (matrix[i][j] < minRow)
                {
                    minRow = matrix[i][j];
                    minRowIndex = j;
                }
            }
            // Check if this minimum element is the maximum in its column
            bool isMaxInCol = true;
            for (int k = 0; k < n; ++k)
            {
                if (matrix[k][minRowIndex] > minRow)
                {
                    isMaxInCol = false;
                    break;
                }
            }
            if (isMaxInCol)
            {
                lucky.push_back(minRow);
            }
        }
        return lucky;
    }
};