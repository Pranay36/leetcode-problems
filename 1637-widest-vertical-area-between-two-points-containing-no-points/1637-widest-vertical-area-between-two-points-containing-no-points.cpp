class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& point) {
        int n = point.size();
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            v[i] = point[i][0];
        }
        
        sort(v.begin(),v.end());
        int mx =0;
        for(int i=1;i<n;i++){
            if(v[i]-v[i-1]>=mx){
                mx = v[i]-v[i-1];
            }
        }
        return mx;
        
    }
};