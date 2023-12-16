 class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> :: iterator itr;
        vector<int> :: iterator it;
        
        int j=0;
        int n = nums.size();
        if(n==0 || n==1){
            return n;
        }
        int temp[n];
        
  for (int i = 0; i < n - 1; i++){
        if (nums[i] != nums[i + 1])
            temp[j++] = nums[i];
            
      }
 
    temp[j++] = nums[n - 1];
 
    for (int i = 0; i < j; i++)
        nums[i] = temp[i];
 
    return j;
        
    }
    
};