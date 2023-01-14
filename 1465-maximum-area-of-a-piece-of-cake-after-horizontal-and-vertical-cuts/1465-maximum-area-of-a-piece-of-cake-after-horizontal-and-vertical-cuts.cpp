class Solution {
public:
    int maxArea(int h, int w, vector<int>& hor, vector<int>& ver) {
        vector<int> h1;
        vector<int> v1;
        
        sort(hor.begin(),hor.end());
        sort(ver.begin(),ver.end());
        
        hor.push_back(h);
        ver.push_back(w);
        
        h1.push_back(hor[0]);
        v1.push_back(ver[0]);
        
        for(int i=1;i<hor.size();i++){
            int x = hor[i]-hor[i-1];
            h1.push_back(x);   
        }
        
        for(int i=1;i<ver.size();i++){
            int x = ver[i]-ver[i-1];
            v1.push_back(x);   
        }
       
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<h1.size();i++){
            cout<<h1[i]<<" ";
        }
        int l =0;
        int b =0;
        for(int i =0;i<v1.size();i++){
            l = max(l,v1[i]);
        }
        for(int i =0;i<h1.size();i++){
            b = max(b,h1[i]);
        }
        long long ans = ((long long)l*(long long)b)%(1000000007);
        int x = (int)ans;
        
        return x;
    }
};