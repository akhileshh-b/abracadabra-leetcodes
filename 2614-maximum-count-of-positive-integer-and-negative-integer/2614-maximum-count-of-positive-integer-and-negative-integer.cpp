class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int nc=0, pc=0;
        for(int num:nums){
            if(num<0){
                nc++;
            }
            else if(num>0){
                pc++;
            }
        }
        return max(pc,nc);
    }
};