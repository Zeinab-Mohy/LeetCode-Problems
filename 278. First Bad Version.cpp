// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=0,r=n-1;
        while(l<=r){
            int mid=r-(r-l)/2;
            if(isBadVersion(mid)==false){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return l;
    }
};
