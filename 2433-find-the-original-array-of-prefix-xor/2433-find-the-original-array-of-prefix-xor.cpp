class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> arr;
        int n = pref.size();
        int x = pref[0];
        arr.push_back(x);
        // arr.push_back(x^arr[1]);
        for(int i=1;i<n;i++){
            int x = pref[i-1]^pref[i];
            arr.push_back(x);
        }
        return arr;
    }
};