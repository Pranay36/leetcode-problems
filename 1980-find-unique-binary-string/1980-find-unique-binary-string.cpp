class Solution {
public:
    string temp;

    void f(vector<string> &num, map<string,int> &mp, string &ans,int i){
        if(mp.find(ans)!=mp.end()){
        }else{
            temp = ans;
        }
        if(i==num.size()){
            return;
        }
        
        ans[i] ='1';
        f(num,mp,ans,i+1);
        ans[i] = '0';
        f(num,mp,ans,i+1);
        return;
    }
    
    string findDifferentBinaryString(vector<string>& num) {
        int n= num.size();
        map<string,int> mp;
        for(auto it:num){
            mp[it]++;
        }
        
        for(auto it:mp){
            cout<<it.first<<" "<<it.second;
            cout<<endl;
        }
        
        string ans ="";
        for(int i=0;i<n;i++){
            ans += '0';
        }
        if(mp.find(ans)!=mp.end()){
        }else{
             return ans;
        }
        f(num,mp,ans,0);
        return temp;
    }
};