class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        int l = nums.size();
        v.push_back(nums[0]);
        for(int i=1, j=0;i<l;i++){
            if(nums[i]!=v[j]){
                j++;
                v.push_back(nums[i]);
            }
        }
        nums=v;
        return v.size();

    }
};