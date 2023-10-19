class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'&&!st.empty()){
                st.pop();
            }
            if(s[i]!='#'){
                st.push(s[i]);
            }
        }
        string s1 ="";
        string t1  ="";
        stack<char>ts;
        for(int i=0;i<t.size();i++){
            if(t[i]=='#'&&!ts.empty()){
                ts.pop();
            }
            if(t[i]!='#'){
                ts.push(t[i]);
            }
        }
        while(!st.empty()){
            s1 = s1+st.top();
            st.pop();
        }
        while(!ts.empty()){
            t1 = t1+ts.top();
            ts.pop();
        }
        cout<<t1<<" "<<s1<<endl;
        if(s1 ==t1){
            return true;
        }
        return false;
    }
};