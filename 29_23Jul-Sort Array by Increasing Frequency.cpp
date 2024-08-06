class Solution {
public:
    vector<int> frequencySort(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        //modified sort func to check for the freq of the arr elements using lambda func
        sort(arr.begin() , arr.end() , [&] (int a , int b){
            // agar freq same ni aa ta ghat freq wale nu return as ascending ,
            // agar equal aa ta vaddi freq wala return as descending
            return freq[a] != freq[b] ? freq[a] < freq[b] : a > b;
        });
        return arr;
    }
};