class Solution {
public:
    int count =0;
    int numberOfMatches(int n) {
        
        if(n==0||n==1){
            return count;
        }
        if(n%2==0){
            count +=n/2;
            return numberOfMatches(n/2);
        }
        else{
            count += (n-1)/2 +1;
            return numberOfMatches((n-1)/2);
        }
        
       
       
    }
};