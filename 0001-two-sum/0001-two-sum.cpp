class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> ans(2);
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i]) != mp.end()){
                ans[1] = i;

                auto it = mp.find(target-nums[i]);
                ans[0] =  it->second;
                break;
            }

            mp[nums[i]]=i;
        }


        return ans;
    }
};