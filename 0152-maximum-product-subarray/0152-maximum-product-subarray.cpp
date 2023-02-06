class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mxleft =nums[0];
        int n = nums.size();
        int mxright=nums[n-1];
        int mul=1;
        bool zero=false;
        
        for(auto x:nums){
            mul = mul*x;
            if(mul==0){
                zero = true;
                mul=1;
                continue;
            }
            mxleft = max(mxleft,mul);
    
        }
        mul =1;
        
        for(int i=nums.size()-1;i>=0;i--){
            mul =mul*nums[i];
            if(mul==0){
                zero = true;
                mul=1;
                continue;
            }
            mxright = max(mxright,mul);
        }
        
        if(zero)
            return max(max(mxleft,mxright),0);
        return max(mxleft,mxright);
    }
};