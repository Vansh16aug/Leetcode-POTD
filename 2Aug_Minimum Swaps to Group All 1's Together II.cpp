class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int totalOnes = 0;
        int currOnes = 0;
        int maxCount = 0;

        // vector<int> arr(2 * n);
        // // appending
        // for (int i = 0; i < 2 * n; i++) {
        //     arr[i] = nums[i % n];
        // }

        // counting nummber of  1s / sliding window barrier (which is sum of
        // array coz only 0 & 1)
        for (int i = 0; i < n; i++) {
            totalOnes += nums[i];
        }
        // sliding window
        while (j < 2 * n) {
            if (nums[j % n] == 1) {
                currOnes++;
            }
            // if window exceeds
            if (j - i + 1 > totalOnes) {
                currOnes -= nums[i % n];
                i++;
            }
            maxCount = max(maxCount, currOnes);
            j++;
        }
        return totalOnes - maxCount;
    }
};