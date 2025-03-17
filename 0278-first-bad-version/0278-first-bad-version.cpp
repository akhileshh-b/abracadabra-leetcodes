// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    
    int firstBadVersion(int n) {
        int ans=0;
        int low = 0; 
        int high = n;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if(isBadVersion(mid)==true){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};