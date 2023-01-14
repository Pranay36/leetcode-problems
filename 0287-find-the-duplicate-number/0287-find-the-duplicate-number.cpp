class Solution {
public:
    int findDuplicate(vector<int>& num) {
       int n = num.size();
        vector<int>arr(n); 
        for(int i=0;i<n;i++){
            arr[num[i]]++;
        }
    
    int ans;
    for(int i=0;i<n;i++){
        if(arr[i]>=2){
            ans = i;
        }
    }
    cout<<ans;
    return ans;
    }
};