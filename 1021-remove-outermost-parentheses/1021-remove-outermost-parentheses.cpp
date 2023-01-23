class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stk;
        string ans="";
        
        for(auto c:s){
            if(c=='('){
                if(stk.size()>0){
                    ans += '(';
                }
                stk.push('(');
            }
            else{
                if(stk.size()>1){
                    ans += ')';
                }
                stk.pop();
            }
        }
        return ans;
    }
};