#include<bits/stdc++.h>
class Solution {
public:
    int minDifference(vector<int>& arr) {
        int n=arr.size();
        int mini=INT_MAX;
        if(n<4) return 0;
        sort(arr.begin(),arr.end());
        mini=min(mini,arr[n-1]-arr[3]);
        mini=min(mini,arr[n-2]-arr[2]);
        mini=min(mini,arr[n-3]-arr[1]);
        mini=min(mini,arr[n-4]-arr[0]);

        return mini;
    }
};