class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        long long ans=0;
        long long m[60] ={0};
        long long n = time.size();
        for(int i=0;i<n;i++){
            time[i] = time[i]%60;
            m[time[i]]++;
        }
        int count=0;
        for(int i=0;i<60;i++){
            if(i==30 || i==0){
                count = count+ m[i]*(m[i]-1)/2;
                cout<<count<<endl;
            }
        
            else{
                count = count+ m[i]*m[60-i]; 
                m[60-i] = 0;
            }
        }
        // cout<<count;
        return count;
        }
    
};