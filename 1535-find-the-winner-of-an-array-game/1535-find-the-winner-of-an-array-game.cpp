class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        if(k>n){
            return *max_element(arr.begin(),arr.end());
        }
        
        long long x = 0;
        int winner=arr[0];
        int i = 0;
        for (int i = 1; i < arr.size(); ++i) {
            if (winner > arr[i]) {
                x++;
            } else {
                winner = arr[i];
                x = 1;
            }

            if (x == k) {
                return winner;
            }
        }

        return winner;
    }
};