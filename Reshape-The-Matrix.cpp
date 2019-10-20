// Reshape the Matrix - LeetCode
// https://leetcode.com/problems/reshape-the-matrix/

// Concise Solution

class Solution {
public:

    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        
        int n = nums.size(); int m = nums[0].size();
        
        if(n * m != r * c) return nums;
        
        vector<vector<int>> res(r, vector<int> (c, 0));
        
        for(int i=0;i<r*c;i++) res[i/c][i%c] = nums[i/m][i%m];
        
        return res;
    }
};