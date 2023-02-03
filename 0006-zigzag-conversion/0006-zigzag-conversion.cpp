class Solution {
public:
    string convert(string s, int n) {
        int m =s.size();
        vector<vector<char>> v( n , vector<char> (m, '#'));
        bool f=true;
        for(int i=0,j=0;i<s.size();i++){
            v[j][i]=s[i];
            if(n==1){
                continue;
            }
            if(j==n-1)
                f=false;
            if(j==0)
                f=true;
            
            if(f)
                j++;
            else
                j--;
        }
        string ans="";
        for(int i=0;i<n;i++){
            for(int j=0;j<s.size();j++){
                if(v[i][j]!='#'){
                    ans += v[i][j];
                }
                // cout<<v[i][j]<<" ";
            }
        }
        return ans;
    }
};