class Solution {
public:
    int searchInsert(vector<int>& v, int n) {
        int l = 0;
        int h = v.size()-1;
        int ans;
        int cel;
        if(n>v[v.size()-1]){
            cel = v.size();
        }else{
            while(l<=h){
                int mid = (l+h)/2;
                if(v[mid]==n){
                    cel = mid;
                    break;
                }
                else if(v[mid]<n){
                    l = mid+1;
                }
                else{
                    h = mid-1;
                    cel = mid;
                }
            }
        }
        return cel;
    }
};