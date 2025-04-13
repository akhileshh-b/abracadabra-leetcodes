class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> mp(nums.begin(), nums.end());
        if (mp.size() > 2) { 
            auto it = mp.end();
            advance(it, -3);
            return *it;
        } 
        return *prev(mp.end());
    }
};