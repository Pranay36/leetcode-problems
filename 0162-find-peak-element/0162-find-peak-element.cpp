class Solution {
public:

    
    int findPeakElement(vector<int>& v) {
        int r=v.size()-1;
        int l=0;
        int ans=-1;
        int n =v.size();
        while (l < r) {
    int mid = (l + r) / 2;

    if (mid == 0)
      return v[0] >= v[1] ? 0 : 1;

    if (mid == v.size() - 1)
      return v[n - 1] >= v[n - 2] ? n - 1 : n - 2;

    //Cheking whether peak ele is in mid position
    if (v[mid] >= v[mid - 1] && v[mid] >= v[mid + 1])
      return mid;

    //If left ele is greater then ignore 2nd half of the elements
    if (v[mid] < v[mid - 1])
      r= mid - 1;

    //Else ignore first half of the elements
    else
      l = mid + 1;
  }
        return l;
    }
};