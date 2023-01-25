class Solution {
public:
    int myAtoi(string s) {
        int ans=0;
        int i=0;
        int sign=1;
		
        while(i<s.size()&&s[i]==' ')
            i++; 
        
        if(s[i]=='-'||s[i]=='+')          
        {
            sign=s[i]=='-'?-1:1;
            i++;
        }
        
        while(i<s.size()&&(s[i]>='0'&&s[i]<='9'))  
        {
            int x=(s[i]-'0')*sign;
            if(sign==1 && (ans>INT_MAX/10 || (ans==INT_MAX/10 && x>INT_MAX%10)))
                return INT_MAX; 
            if(sign==-1 &&(ans<INT_MIN/10 || (ans==INT_MIN/10 && x<INT_MIN%10))) 
                return INT_MIN;
            
            ans=ans*10+x; 
            i++;
            // sign =1;
        }
    
    return ans;
    }
};