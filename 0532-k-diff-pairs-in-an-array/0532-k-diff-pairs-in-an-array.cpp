class Solution {
public:
    int findPairs(vector<int>& num, int k) {
        sort(num.begin(),num.end());
        int n =num.size();
        int count=0;
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[num[i]]++;
        }
        for(int i=0;i<n;){
            int x = k+num[i];
            if(binary_search(num.begin()+i+1, num.end(), x)){
                count++;
            }
            i = i+m[num[i]];
            
        }
        return count;
    }
};