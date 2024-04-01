class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        while(n>0){
            if(s[n-1]!=' '){
                break;
            }else{
                s.pop_back();
                n--;
            }
        }
        int count=0;
        while(n>0){
            
            if(s[n-1]==' '){
                break;
            }
            count++;
            n--;
        }
        return count;

    }
};