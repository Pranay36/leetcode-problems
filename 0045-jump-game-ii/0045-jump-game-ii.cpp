class Solution {
public:
    int jump(vector<int>& n) {
        int count=0;
        int j=0;
        int i =0;
        while(j<n.size()-1){
             count++;
            int mx = j+1;

            for(int k = i;k<=j;k++){
                if(i+n[k]>=n.size()-1)
                    return count;
                mx = max(mx,k+n[k]);
            }
            
            i = j+1;
            j = mx;
           
        }
        return count;
    }
};

