class Solution {
public:
    string convertToTitle(int n) {
        string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string str;
        int c = 0;
        while(n>0){
            if(n%26!=0){
                c = n%26;
            }else{
                c = 26;
            }
            n = (n-c)/26;
             str = str+ char('A'+ c-1);
        }
        reverse(str.begin(), str.end()); 
        cout<<str;
        
        return str;
    }
};