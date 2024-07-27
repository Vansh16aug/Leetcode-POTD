class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> mpp;
        vector<int> ans;
        for (int i = 0; i < names.size(); i++) {
            mpp[heights[i]]=names[i];
        }
        sort(heights.rbegin(),heights.rend());
        for(int i=0;i<names.size();i++){
            names[i]=mpp[heights[i]];
        }
        return names;
    }
};