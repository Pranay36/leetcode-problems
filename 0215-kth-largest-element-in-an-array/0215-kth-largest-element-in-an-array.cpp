class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
       int n = v.size();
        priority_queue<int> pq;
        
        for(int i=0;i<n;i++){
            pq.push(v[i]);
        }
        
        while (k!=1) {
        pq.pop();
            k--;
    }
        return pq.top();
        
    }
};