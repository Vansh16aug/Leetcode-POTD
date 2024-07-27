class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>skip;
        string result;

        for(auto& ch :s){
            if(ch=='('){
                skip.push(result.length());
            }
            else if(ch==')'){
                reverse(result.begin()+skip.top(),result.end());
                skip.pop();
            }
            else{
                result.push_back(ch);
            }
        }   
        return result;
    }
};