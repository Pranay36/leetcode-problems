class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       int n = arr.size();
        int x = n/4;
        int i=1;
        int k = x;
        cout<<k<<" ";
        int com = arr[0];
        while(k!=0){
            if(com == arr[i])
                k--;
            else
                k =x;
            
            com = arr[i];
            i++;
        }
        return com;
    }
};