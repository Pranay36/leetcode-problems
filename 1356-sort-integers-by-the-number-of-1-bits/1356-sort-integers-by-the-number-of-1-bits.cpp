class Solution {
public:
   
   int countSetBits(int n)
   {
    if (n == 0)
        return 0;
    else
        return (n & 1) + countSetBits(n >> 1);
   }
    
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[countSetBits(arr[i])].push_back(arr[i]);
        }
        vector<int> v;
        for(auto it:mp){
            int k  =it.second.size();
            for(int i=0;i<k;i++){
                v.push_back(it.second[i]);
            }
        }
        return v;
    }
};