// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int low = 1,high = n,mid;
        long int pos = 1;
        while(low<=high){
            mid = low+(high-low)/2;
            bool temp = isBadVersion(mid);
            if(temp == true){
                pos = mid;
                high = mid -1;
            }
            else
                low = mid+1;
        }
        return pos;
    }
};
