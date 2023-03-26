class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
        stack<int>s;
        int n = n2.size();
        vector<int>v(n,0);

        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                s.push(n2[i]);
                v[i]=-1;
            }
            
            else if(n2[i]<s.top()){
                v[i]=s.top();
                s.push(n2[i]);
                
            }else{
                while(!s.empty() &&n2[i]>s.top()){
                    s.pop();
                }
                if(s.empty()){
                    s.push(n2[i]);
                    v[i]=-1;
                }
                else{
                    v[i] = s.top();
                    s.push(n2[i]);
                    
                }
            }
            
        }
        
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[n2[i]] = v[i];
        }
        
        vector<int> ans;
        for(int i = 0;i<n1.size();i++){
            ans.push_back(m[n1[i]]);
        }
        return ans;
        
        
    }
};