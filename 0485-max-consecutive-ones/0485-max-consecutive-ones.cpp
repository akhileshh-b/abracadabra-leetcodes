class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxcount=0;
        for(int num:nums){
            if(num==1){
                count++;
                maxcount=max(count,maxcount);
            }
            else{
                count=0;
            }
        }
        return maxcount;
    }
};