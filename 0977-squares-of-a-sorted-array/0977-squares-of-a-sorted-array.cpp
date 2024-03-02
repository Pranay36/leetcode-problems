class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int i=0;
        for(i=0;i<n;i++){
            if(nums[i]>=0){
                break;
            }
            else 
                j=i;
        }
        if(i==j){
            for(int i=0;i<n;i++){
                nums[i] *=nums[i];
            }
            return nums;
        }
        
        vector<int>ans;
        int a=j;
        int b = i;
        while(a>=0&&b<n){
            if(nums[a]*(-1)>nums[b]){
                ans.push_back(nums[b]*nums[b]);
                b++;
            }else{
                ans.push_back(nums[a]*nums[a]);
                a--;
            }
        }
        while(a>=0){
            ans.push_back(nums[a]*nums[a]);
            a--;
        }
        while(b<n){
            ans.push_back(nums[b]*nums[b]);
            b++;
        }
        
        cout<<j<<" "<<i;
        return ans;
    }
};