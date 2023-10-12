/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    
    int binaryl(int x, MountainArray &mountainArr , int l, int r){
        while(l<=r){
            int mid = (l+r)/2;
            
            if(mountainArr.get(mid)==x){
                return mid;
            }
            else if(mountainArr.get(mid)>x){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return -1;
    }
    int binaryr(int x, MountainArray &mountainArr , int l, int r){
        while(l<=r){
            int mid = (l+r)/2;
            
            if(mountainArr.get(mid)==x){
                return mid;
            }
            else if(mountainArr.get(mid)<x){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return -1;
    }
    int findInMountainArray(int x, MountainArray &mountainArr) {
        int n= mountainArr.length();
        int r = n-1;
        int l =0;
        int peak=-1;
//         while (l < r) {
//             int mid = (l + r) / 2;
//             if (mid == 0){
//                 if(mountainArr.get(mid) >= mountainArr.get(1))  
//                 {peak = 0; break;}
//                 else
//                 {peak= 1;break;}
//             }
//             if (mid == n - 1){
//                 if(mountainArr.get(mid) >= mountainArr.get(mid-1)) 
//                 {peak =n - 1;break;} 
//                 else
//                 {peak= n - 2;break;}
//             }
//             if (mountainArr.get(mid) >= mountainArr.get(mid-1)&& mountainArr.get(mid) >= mountainArr.get(mid+1))
//             {peak = mid; break;}
            
//             if (mountainArr.get(mid) <mountainArr.get(mid-1))
//                 r= mid - 1;
//             else
//                 l = mid + 1;
//   }
        l  = 0;
        r = n - 1;
        while (l < r) {
            int m = (l + r) / 2;
            if (mountainArr.get(m) < mountainArr.get(m + 1))
                l = peak = m + 1;
            else
                r = m;
        }
        
        cout<<peak<<endl;
        if(peak==-1){
            peak = l;
        }
        
        cout<<peak<<endl;
        int k = mountainArr.get(peak);
        int left = binaryl(x,mountainArr,0,peak);
        int right = binaryr(x,mountainArr,peak,n-1);
        cout<<left;
        cout<<right;
        if(left==-1){
            return right;
        }
        if(right==-1){
            return left;
        }
        if(left!=-1 &&right!=-1){
            return min(left,right);
        }

        return -1;
    }
};