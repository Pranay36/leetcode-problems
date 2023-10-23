class Solution {
public:
    
    
    bool isPowerOfFour(int n) {
        bool c;
      if(n>0){
           int a = log2(n)/2;
          double b = log2(n)/2-a;
      
          if(b>0){
              c= false;
          }else{
              c= true;
          }
      }
        return c;
    }
};