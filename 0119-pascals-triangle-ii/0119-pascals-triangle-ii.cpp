class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> v(n+1);
        v[0] =1;
        // v[n] = 1;
        for(int i=0;i<=n;i++){
            for(int j=i;j>0;j--){
                v[j] = v[j]+v[j-1];
            }
        }
        return v;
    }
};
// class Solution {
// public:
//     vector<int> getRow(int rowIndex) {
//         vector<int> vi(rowIndex + 1);
//        	vi[0] = 1;
//         for (int i = 0; i <= rowIndex ; ++i)
//         {
//         	for (int j = i; j > 0; --j)
//         	{
// 	        	vi[j] = vi[j] + vi[j-1];
//         	}
//         }
//         return vi;
//     }
// };