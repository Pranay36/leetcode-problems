    unordered_map<char,int> m;
    
 bool cmp(string a,string b) {
     int k = min(a.size(),b.size());
     
     for(int i=0;i<k;i++){
         if(m[a[i]]<m[b[i]])
             return true;
         else if(m[a[i]]>m[b[i]]) 
             return false;
     }
     if(a.size()<=b.size()){
         return true;
     }
     return false;
}

class Solution { 
public:
 
    bool isAlienSorted(vector<string>& v, string st) { 
        
        int n = v.size();
        for(int i=0;i<st.size();i++){
            m[st[i]]=i;
        }
        vector<string>temp = v;
        sort(temp.begin(),temp.end(),cmp);
        bool flag= true;
        for(int i=0;i<n;i++){
            if(v[i]!=temp[i]){
                flag=false;
                break;
            }
        }
        return flag;
    }
};