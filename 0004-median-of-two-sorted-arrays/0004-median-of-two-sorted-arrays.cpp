class Solution {
public:

    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
        for(int i=0;i<v2.size();i++){
            v1.push_back(v2[i]);
        }
       sort(v1.begin(),v1.end());
        // for(int i=0;i<v1.size();i++){
        //     cout<<v1[i]<<" ";
        // }
        double ans;
        int n = v1.size();
        if(n%2==0 && n>1){
           int  mid = (n-1)/2;
            ans = (v1[mid]+v1[mid+1]);
            ans = ans/2;
            cout<<v1[mid]<< " "<< v1[mid+1];
            
        }
        if(n==1){
            ans = v1[0];
        }
        if(n%2!=0 && n>1){
            int  mid = (n-1)/2;
            ans = v1[mid];
            cout<<v1[mid];
        }
        if(n==0){
            ans =-1;
        }
        return ans;
        
    }
};