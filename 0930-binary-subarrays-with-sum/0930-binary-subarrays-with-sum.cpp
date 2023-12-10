class Solution {
public:
    int numSubarraysWithSum(vector<int>& num, int goal) {
        int i=0;
        int j=0;
        int n = num.size();
        int cur_sum=0;
        int count0=0;
        int count1=0;
        while(j<n){
            cur_sum += num[j];
            
            while(i<=j && cur_sum>goal){
                cur_sum -= num[i];
                i++;
            }
            
            count0 += j-i+1;
            j++;

        }
        i=0;
        j=0;
        cur_sum=0;
        goal = goal-1;
        
        while(j<n){
            cur_sum += num[j];
            
            while(i<=j && cur_sum>goal){
                cur_sum -= num[i];
                i++;
            }
            
            count1 += j-i+1;
            j++;

        }
        
        
        
        return count0-count1;
    }
};