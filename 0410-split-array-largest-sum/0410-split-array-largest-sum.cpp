class Solution {
public:
    int count_x(vector<int> arr,int mid){
        int count =1;
        long long pages =0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]+pages<=mid){
                pages+=arr[i];
            }
            else{
                count++;
                pages = arr[i];
            }
        }
        return count;
    }
    
    int splitArray(vector<int>& num, int k) {
        int n = num.size();
        if(k>n){
            return -1;
        }
        int l = *max_element(num.begin(),num.end());
        int r = accumulate(num.begin(),num.end(),0);
        
        while(l<=r){
            int mid = (l+r)/2;
            int x = count_x(num,mid);
            if(x>k){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return l;
    }
};