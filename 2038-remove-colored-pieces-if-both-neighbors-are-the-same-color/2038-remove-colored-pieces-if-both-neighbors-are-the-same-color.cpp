class Solution {
public:
    bool winnerOfGame(string s) {
        int n = s.size();
        int a=0;
        int b = 0;
        int j = 2;
        for(int i=0;i<n-2;i++){
            if(s[i]=='A'&& s[i+1]=='A' && s[i+2]=='A'){
                a++;
            }
            if(s[i]=='B'&& s[i+1]=='B' && s[i+2]=='B'){
                b++;
            }
        }
        cout<<a<<" "<<b;
        if(a>b){
            return true;
        }
        return false;
    }
};