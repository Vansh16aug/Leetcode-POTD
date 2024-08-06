class Solution {
public:
    int M = 1e9 + 7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        // find subarray sums and store them into temp
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                temp.push_back(sum);
            }
        }
        sort(temp.begin(),temp.end());
        // finding sum
        int result = 0;
        // one based indexing
        for (int i = left - 1; i <= right-1; i++) {
            result = (result + temp[i]) % M;
        }
        return result;
    }
};