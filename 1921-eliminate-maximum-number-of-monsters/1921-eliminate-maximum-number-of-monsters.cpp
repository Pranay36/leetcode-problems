class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int> time(n,0);
        for(int i=0;i<n;i++){
            time[i] = ceil ( (1.0*dist[i])/speed[i]);
        }
        
        int count=1;
        sort(time.begin(),time.end());
        int cur_time=1;
        for(int i=1;i<n;i++){
            time[i] = time[i]-cur_time;
            if(time[i]<=0)
                break;
            else{
                count++;
            }
            cur_time++;
        }
        return count;
    }
};