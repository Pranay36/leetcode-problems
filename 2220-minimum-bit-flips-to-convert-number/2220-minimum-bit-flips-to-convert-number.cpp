class Solution {
public:
    int minBitFlips(int start, int goal) {
        int mask = start^goal;
        int count=0;

        while(mask!=0){
            mask = mask&(mask-1);
            count++;
        }
        return count;
    }
};