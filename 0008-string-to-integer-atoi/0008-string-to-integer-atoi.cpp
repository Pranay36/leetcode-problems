class Solution {
public:
    int atoi(string s, int i ,int sign,int result){
        if(i>=s.size() || s[i]<'0'||s[i]>'9'){
            return sign *result;
        }
        int temp = s[i]-'0';
       if (result > INT_MAX / 10 || result == INT_MAX / 10 && temp > 7)
            return sign > 0 ? INT_MAX : INT_MIN;

        
        return atoi(s,i+1,sign,result*10+temp);
    }
    
    
    int myAtoi(string s) {
        int i =0 ;
        int n = s.size();
        while(s[i]==' ' && i<n){
            i++;
        }
        int sign =1;
        if(s[i]=='-'){
            sign =-1;
            i++;
        }
        else if(s[i]=='+'){
        i++;}
        
        return atoi(s,i,sign,0);
    }
};