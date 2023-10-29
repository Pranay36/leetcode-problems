class Solution {
public:
    int poorPigs(int buckets, int x, int y) {
        if(buckets--==1){
            return 0;
        }
        // buckets--;
        int base = y/x +1;
        int count =0;
        while(buckets>0){
            buckets = buckets/base;
            count++;
        }
        return count;
    }
};