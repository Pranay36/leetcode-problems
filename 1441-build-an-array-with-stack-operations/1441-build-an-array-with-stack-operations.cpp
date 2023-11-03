class Solution {
public:
    vector<string> buildArray(vector<int>& arr, int n) {
        int m = arr.size();
        string  k = "Push";
        string j = "Pop";
        stack<int> st;
        vector<string> ans;
        // ans.push_back(k);
        int i=0;
        st.push(1);
        int x;
        while(i<m){
            if(arr[i]==st.top()){
                i++;
                st.push(st.top()+1);
                ans.push_back(k);
            }
            else{
                ans.push_back(k);
                x = st.top();
                st.pop();
                ans.push_back(j);
                st.push(x+1);
                
            }
        }
        return ans;
    }
};