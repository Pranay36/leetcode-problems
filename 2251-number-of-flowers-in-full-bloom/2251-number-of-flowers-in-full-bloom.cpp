class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flower, vector<int>& people) {
        vector<int> start;
        vector<int> end;
        int n= flower.size();
        for (auto& t : flower){
            start.push_back(t[0]);
        end.push_back(t[1]);
    }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        vector<int> ans;
        for(auto it: people){
            int l = upper_bound(start.begin(),start.end(),it)-start.begin();
            int r = lower_bound(end.begin(),end.end(),it)-end.begin();
            ans.push_back(l-r);
        }
        return ans;
    }
};