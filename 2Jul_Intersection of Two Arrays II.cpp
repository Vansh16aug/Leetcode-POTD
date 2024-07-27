class Solution {
public:
    vector<int> intersect(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        int n=arr1.size();
        int m=arr2.size();
        int left=0;
        int right=0;
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        while(left<n && right<m){
            if(arr1[left]==arr2[right]){
                ans.push_back(arr1[left]);
                left++;
                right++;
            }
            else if(arr1[left]<arr2[right]) {
                left++;
            }
            else{
                right++;
            }
        }
        return ans;
    }
};