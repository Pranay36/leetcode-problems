class Solution {
public:
    int jump(vector<int>& n) {
        int count=0;
        int j=0;
        int i =0;
        while(j<n.size()-1){
             count++;
            int mx = j+1;

            for(int k = i;k<=j;k++){
                if(i+n[k]>=n.size()-1)
                    return count;
                mx = max(mx,k+n[k]);
            }
            
            i = j+1;
            j = mx;
           
        }
        return count;
    }
};

// class Solution {
// public:
//     int jump(vector<int>& nums) {
//         int n = nums.size(), step = 0, start = 0, end = 0;
//         while (end < n - 1) {
//             step++; 
// 			int maxend = end + 1;
// 			for (int i = start; i <= end; i++) {
//                 if (i + nums[i] >= n - 1) return step;
// 				maxend = max(maxend, i + nums[i]);
// 			}
//             start = end + 1;
//             end = maxend;
//         }
// 		return step;
//     }
// };