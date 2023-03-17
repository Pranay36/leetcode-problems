class Solution {
public:
    vector<vector<int>> subsets(vector<int>& num) {
        vector<vector<int>> ans;
        int n = num.size();
        int x = pow(2,n);
        for(int i=0;i<x;i++){
            vector<int> v;
          
            for(int j=0;j<n;j++){
            
                if(i&(1<<j)){
                    v.push_back(num[j]);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>>ans;
        
//         int n=nums.size();
//         int setSize = 1<<n;   // 2^n Number of subset ;
        
//         for(int i=0;i<setSize;i++){
            
//             vector<int>temp;   // for storing values in subsets
            
//             for(int j=0;j<n;j++){
                
//                 if(i & (1<<j)){ //Checking for set bits in number i;
//                 temp.push_back(nums[j]);   // Push the value which is at founded index of setbit 
//                 }
//             }
//             ans.push_back(temp);
//         }
//         return ans;
//     }
// };