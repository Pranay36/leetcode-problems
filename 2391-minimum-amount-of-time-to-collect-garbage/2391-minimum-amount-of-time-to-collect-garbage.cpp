class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int count =0;
        map<char,int> mp;
        int ind1=-1;
        int ind2 =-1;
        int ind3 =-1;
        int a=0;
        for(auto it:garbage){
            count += it.size();
            int m = it.size();
            for(int i=0;i<m;i++){
                mp[it[i]]++;
                if(it[i]=='P')
                    ind1= a;
                if(it[i]=='G')
                    ind2 = a;
                if(it[i]=='M')
                    ind3 = a;
            }
            a++;
        }
        int k = mp.size();
        // cout<<k<<endl;
        int z =0;
        int n = travel.size();
        for(int i=0;i<n;i++){
            z += travel[i];
        }
        count = count + k*z;
        
        if(ind1!=-1){
            for(int i=ind1;i<n;i++){
                count = count - travel[i];
            }
        }
        if(ind2!=-1){
            for(int i=ind2;i<n;i++){
                count = count - travel[i];
            }
        }
        if(ind3!=-1){
            for(int i=ind3;i<n;i++){
                count = count - travel[i];
            }
        }
       cout<<ind1<<ind2<<ind3;
       
        return count;
    }
};