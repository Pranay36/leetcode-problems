//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool issafe(int row,int col,int n,vector<vector<int>>&game){
        int drow=row;
        int dcol = col;
        while(row>=0 && col>=0){
            if(game[row][col])
            return false;
            row--;
            col--;
        }
        row = drow;
        col = dcol;
        while(col>=0){
            if(game[row][col])
            return false;
            col--;
        }
        row = drow;
        col = dcol;
        while(row<n &&col>=0){
            if(game[row][col])
            return false;
            row++;
            col--;
        }
        
        return true;
    }
    void solve(vector<vector<int>>&game, vector<vector<int>> &ans,int n,int col,vector<int>&v){
        if(col==n){
            ans.push_back(v);
            return;
        }
        
        for(int row=0;row<n;row++){
            if(issafe(row,col,n,game)){
                v.push_back(row+1);
                game[row][col]=1;
                solve(game,ans,n,col+1,v);
                game[row][col]=0;
                v.pop_back();
            }
        }
        
    }
    
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> ans;
        vector<int> v;
        vector<int> z(n,0);
        vector<vector<int>>game(n);
        for(int i=0;i<n;i++){
            game[i]=z;
        }
        int i=0;
        // int j=0;
        solve(game,ans,n,i,v);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends