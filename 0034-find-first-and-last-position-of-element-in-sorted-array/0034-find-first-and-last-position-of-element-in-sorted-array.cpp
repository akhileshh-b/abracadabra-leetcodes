class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        int ans1=INT_MAX;
        int ans2=INT_MIN;
        while(l<=h){
            int mid=l+(h-l)/2;
          
            if(nums[mid]==target){
                ans1=min(ans1,mid);
                h=mid-1;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        l=0;
        h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target){
                ans2=max(ans2,mid);
                l=mid+1;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(ans1==INT_MAX){
            return {-1,-1};
        }
        return {ans1,ans2};
    }
};