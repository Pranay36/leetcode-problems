class Solution {
public:
    int f(vector<int>& v,int target,int i){
        if(i==0){
        if(target==0&&v[i]==0){
            return 2;
        }
        else if(target==v[i]){
            return 1;
        }
        else if(target==(-1*v[i]))
                return 1;
        
        else{
            return 0;
        }
        }
        
        int sub = f(v,target+v[i],i-1);
        int add= f(v,target-v[i],i-1);
        return sub+add;
    }
    int findTargetSumWays(vector<int>& v, int target) {
        // vector<vector<int>>dp(n, vector<int>(target))
        int n = v.size();
        int x = f(v, target,n-1);
        return x;
    }
};