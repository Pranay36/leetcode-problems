class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int n = v.size();
        int temp = v[0];
        int x =0;
        int ans =1;
        int i =0;
        int j=0;
        for(auto it = v.begin(); it != v.end();){
            if(*it==temp && x<2){
                x++;
                it++;
            }
            else if(*it==temp){
                // it++;
                v.erase(it);
                
            }
            else{
                temp = *it;
                it++;
                x=1;
            }
        }
        return v.size();
    }
};