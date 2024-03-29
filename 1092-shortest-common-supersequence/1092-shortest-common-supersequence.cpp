class Solution {
public:
    string shortestCommonSupersequence(string s1, string s2) {
         int n = s1.size();
		    int m = s2.size();
		    
		    vector < vector < int >> dp(n + 1, vector < int > (m + 1, 0));
            for (int i = 0; i <= n; i++) {
                dp[i][0] = 0;
                
            }
            for (int i = 0; i <= m; i++) {
                dp[0][i] = 0;
                
            }
            
            for (int ind1 = 1; ind1 <= n; ind1++) {
                for (int ind2 = 1; ind2 <= m; ind2++) {
                    if (s1[ind1 - 1] == s2[ind2 - 1])
                    dp[ind1][ind2] = 1 + dp[ind1 - 1][ind2 - 1];
                    else
                    dp[ind1][ind2] = 0 + max(dp[ind1 - 1][ind2], dp[ind1][ind2 - 1]);
                    
                }
            }
        
            string s ="";
        int i=n;
        int j=m;
        while(i>0&&j>0){
           if(s1[i-1]==s2[j-1]){
               s = s+s1[i-1];
               i--;
               j--;
           }
            else if(dp[i][j-1]>dp[i-1][j]){
                s = s+s2[j-1];
                j--;
            }
            else{
                s = s+s1[i-1];
                i--;
            }
            }
        
//         for(int i=0;i<=n;i++){
//             for(int j=0;j<=m;j++){
//                 cout<< dp[i][j]<<" ";
//             }
//             cout<<endl;
//         }
        while(i>0){
            s = s+s1[i-1];
            i--;
        }
        while(j>0){
            s = s+s2[j-1];
            j--;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};