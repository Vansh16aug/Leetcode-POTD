class Solution {
public:
    string getMappedStr(string& numStr, vector<int>& mapping) {
        string mappedStr = "";
        // iterating through the string ex "991"
        for (int i = 0; i < numStr.length(); i++) {
            int ch = numStr[i];
            // char to int 
            int validCh = ch - '0';
            mappedStr+=to_string(mapping[validCh]);
        }
        return mappedStr;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size();
        // [991,338,38]
        vector<pair<int, int>> vec; // to store the changed value and index
        for (int i = 0; i < n; i++) {
            // extracting the int ex "991"
            string numStr = to_string(nums[i]);

            string mappedStr = getMappedStr(numStr, mapping);

            // string to int using stoi
            int mappedNum = stoi(mappedStr);

            vec.push_back({mappedNum, i});
        }
        // sorting it to this {7,1},{7,2},{669,0}
        sort(vec.begin(), vec.end());
        vector<int> result;
        for (auto it : vec) {
            // extracting the index from pair using .second
            // ie .{338,38,669}
            result.push_back(nums[it.second]);
        }
        return result;
    }
};