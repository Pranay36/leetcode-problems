class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& point) {
        int n = point.size();
        int mx =0;
        sort(point.begin(),point.end());
        for(int i=1;i<n;i++){
            if(point[i][0]-point[i-1][0]>=mx){
                mx = point[i][0]-point[i-1][0];
            }
        }
        return mx;
        
    }
};