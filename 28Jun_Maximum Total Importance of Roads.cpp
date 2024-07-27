class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>degree(n,0);

        for(auto arr: roads){
            int u=arr[0];
            int v=arr[1];
            degree[u]++;
            degree[v]++;
        }
        sort(degree.begin(),degree.end());

        long long value =1;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=(degree[i]*value);
            value++;
        }
        return sum;
    }
};

