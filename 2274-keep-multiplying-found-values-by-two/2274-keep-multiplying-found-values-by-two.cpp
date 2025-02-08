class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();
        int flag = 1;
        while(flag==1){
            flag = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==original){
                original*=2;
                flag =1;
                
            }
        }
        }
        return original;
    }
};