class Solution {
public:
    void gameOfLife(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        vector<vector<int>>temp(n,vector<int> (m,2));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==0){
                    int cnt=0;
                    for(int k=max(i-1,0);k<min(n,i+2);k++){
                        for(int l = max(j-1,0);l<min(m,j+2);l++){
                            if(v[k][l]==1)
                                cnt++;
                           
                        }
                    }
                     if(cnt==3)
                        temp[i][j]=1;
                    else{
                        temp[i][j]=0;
                    }
                }
                if(v[i][j]==1){
                    int cnt=0;
                     for(int k=max(i-1,0);k<min(n,i+2);k++){
                        for(int l = max(j-1,0);l<min(m,j+2);l++){
                            if(v[k][l]==1)
                                cnt++; 
                        }
                    } 
                    if(cnt<=2 || cnt>4)
                        temp[i][j]=0;
                    if(cnt>2 && cnt <=4){
                        temp[i][j]=1;
                    }
                }
            }
        }
            
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    v[i][j]=temp[i][j];
                }
            }
    }
};