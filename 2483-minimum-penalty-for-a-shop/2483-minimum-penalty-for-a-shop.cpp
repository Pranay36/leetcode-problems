class Solution {
public:
    int bestClosingTime(string cust) {
        int max_score =0;
        int score =0;
        int best_hour = -1;
        int n = cust.size();
        for(int i=0;i<n;i++){
            if(cust[i]=='Y'){
                score++;
            }
            else{
                score--;
            }
            if(score>max_score){
                best_hour = i;
            }
            max_score  = max(max_score,score);
            
        }
        return best_hour+1;
    }
};