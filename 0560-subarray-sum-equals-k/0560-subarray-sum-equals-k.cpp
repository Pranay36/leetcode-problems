class Solution {
public:
    int subarraySum(vector<int>& num, int k) {
        int count =0;
        int n = num.size();
        unordered_map<int,int> m;
        int sum =0;
        int i=0;
        while(i<n){
            sum = sum+num[i];
            if(sum==k){
                count++;
            }
            if(m.find(sum-k)!=m.end()){
                count = count+ m[sum-k];
            }
            m[sum]++;
            i++;
        } 
        return count;
    }
};