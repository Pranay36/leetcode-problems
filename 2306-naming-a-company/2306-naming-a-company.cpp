class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        vector<unordered_set<string>> count(26);
        for(auto& idea : ideas){
            count[idea[0] - 'a'].insert(idea.substr(1));
        }
        long ret = 0;
        for(int i = 0; i < 26; i ++){
            for(int j = i + 1; j < 26; j ++){
                long c1 = 0, c2 = 0;
                for(auto& p : count[i]){
                    if(count[j].find(p) == count[j].end()){
                        c1 ++;
                    }
                }
                for(auto& p : count[j]){
                    if(count[i].find(p) == count[i].end()){
                        c2 ++;
                    }
                }
                ret += c1 * c2 * 2;
            }
        }
        return ret;
    }
};