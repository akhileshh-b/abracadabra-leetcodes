class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for(int it:nums){
            ans = ans ^ it;
        }
        return ans;
    }
};