class Solution {
public:
    
    long long f(vector<int>&num, int i,int j, int chance){
        if(i>j)
            return 0;
        if(chance==0){
            return max(num[i]+f(num,i+1,j,1),num[j]+f(num,i,j-1,1));
        }
        else
            return min(f(num,i+1,j,0), f(num,i,j-1,0));
    }
    
    
    bool PredictTheWinner(vector<int>& num) {
        int n = num.size();
        long long  two =0;
        for(int i=0;i<num.size();i++){
            two += num[i];
        }
        long long one  = f(num, 0, n-1,0);
        two = two-one;
        return one>=two;
    }
};