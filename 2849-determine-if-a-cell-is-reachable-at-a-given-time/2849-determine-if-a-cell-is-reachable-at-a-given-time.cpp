class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int mx = abs(fx-sx) + abs(fy-sy);
        int mn = max(abs(fx-sx),abs(fy-sy));
        cout<<mx;
        if(mx==0&&t==1)
            return false;
        if(t>=mn)
        return true;
        
        return false;
    }
};