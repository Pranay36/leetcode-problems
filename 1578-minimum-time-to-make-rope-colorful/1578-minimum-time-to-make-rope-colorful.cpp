class Solution {
public:
    int minCost(string str, vector<int>& num) {
       int n = str.size();
        int ans = 0;
        int j = 0;
       for(int i = 1; i < n; i++){
           char currColor = str[i];
           char prev = str[j];
           if(currColor == prev){
               if(num[i] > num[j]){
                   ans += num[j];
                   j = i;
               }else{
                   ans += num[i];
               }
           }else j = i;
       }
       return ans;
    }
};

