class Solution {
public:
    bool check(vector<int>& nums) {
        int maxrotation=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                maxrotation++;
            }
        }
        if(nums[0]<nums[nums.size()-1]){
                maxrotation++;
            }
        if(maxrotation<=1){
            return true;
            }
        else {
            return false;
        }
    }
};