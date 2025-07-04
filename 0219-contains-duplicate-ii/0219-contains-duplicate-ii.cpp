class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>> mp;

        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        for(auto it:mp){
            if(it.second.size()<=1){continue;}
            else{
            vector<int> temp = it.second;
            int s = temp.size();
                for(int i=0;i<s-1;i++){
                    if(abs(temp[i]-temp[i+1])<=k){
                        return true;
                        }
                }
            }
        }
        return false;
    }
};