class Solution {
public:
    int pivotIndex(vector<int>& v) {
        vector<int> :: iterator itr;
        int x ;
         int i=1;
        for(itr = v.begin()+1; itr<=v.end();itr++){
           
            int left = 0;
            int right =0;
            left = accumulate(v.begin(),itr-1,0);
                right = accumulate(itr,v.end(),0);
            // cout<<right<<"=="<<left<<endl;
            if(right == left){
                x=i-1;
                break;
            }
            i++;
            
        }
      if(x==v.size()+1)
          return -1;
        
        else
     return x; 
    }
    
};