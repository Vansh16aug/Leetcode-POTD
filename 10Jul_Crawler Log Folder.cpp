class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth=0;

        for(auto& log : logs){
            if(log == "../"){
                depth--;
                if(depth<0) depth=0;
            }
            else if(log == "./"){
                continue;
            }
            else{
                depth++;
            }
        }
        return depth;
    }
};