class Solution {
public:
    int search(vector<int>& v, int k) {
        int l = 0;
        int h = v.size()-1;
        int ans;
       while(l<=h){
            int mid = (l+h)/2;
            if(v[mid]==k) 
                return mid;
            else if(v[mid]>k)
                h=mid-1;
            else
                l=mid+1;
        }
        return -1;
    }
};
    