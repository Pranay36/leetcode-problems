class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if(n==1){
            return n;
        }
       vector<char> v;
        for(int i=0;i<n;){
            int count =0;
            char letter = chars[i];
            while(i<n && chars[i]==letter){
                i++;
                count++;
            }
            v.push_back(letter);
            if(count>1){
            for(char c:to_string(count)){
                v.push_back(c);
            }
            }
            
        }
        chars = v;
        return chars.size();
    }
};