class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int k=0;
        for(int i=0;i<n;i++){
            char x = s[s.size()-1];
            s.pop_back();
            s.insert(0,1,x);
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};