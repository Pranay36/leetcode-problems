class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        
        for(int i=0;i<=n;i++){
            int x = i;
            int count=0;
            while (x) {
            x &= (x - 1);
            count++;
            }
            v.push_back(count);
        }
        return v;
    }
};