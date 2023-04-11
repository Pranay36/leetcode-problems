class Solution {
public:
    int largestRectangleArea(vector<int>& v) {
        int n =v.size();
        stack<int>st;
        int left[n],right[n];
        for(int i=0;i<n;i++){
            while(!st.empty()&& v[st.top()]>=v[i]){
                st.pop();
            }
            if(st.empty()){
                left[i]=0;
            }
            else{
                left[i]=st.top()+1;
            }
            st.push(i);
        }
        
        while(!st.empty())
            st.pop();
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&& v[st.top()]>=v[i]){
                st.pop();
            }
            if(st.empty()){
                right[i]=n-1;
            }
            else{
                right[i]=st.top()-1;
            }
            st.push(i);
        }
        int mx =0;
        for(int i=0;i<n;i++){
            mx = max(mx,v[i]*abs(right[i]-left[i]+1));
        }
        return mx;
    }
    int maximalRectangle(vector<vector<char>>& mat) {
        int maxArea = 0;
        int n = mat.size();
        int m = mat[0].size();
        vector<int>v(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='1'){
                    v[j]++;
                }else
                    v[j]=0;
            }
            int area = largestRectangleArea(v);
            maxArea = max(area,maxArea);
        }
        return maxArea;
    }
};