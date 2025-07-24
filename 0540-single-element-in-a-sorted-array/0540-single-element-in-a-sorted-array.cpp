class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int finalanswer=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            finalanswer=finalanswer^nums[i];
        }
        return finalanswer;
    }
}; 