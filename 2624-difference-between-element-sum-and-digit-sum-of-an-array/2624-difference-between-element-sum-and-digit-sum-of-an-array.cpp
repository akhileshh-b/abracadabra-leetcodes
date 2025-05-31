class Solution {

public:
    int sumOfDigits(int n){
        int sum = 0;
        while(n>0){
            sum = sum + n%10;
            n= n/10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum= 0;
        for(int i=0;i<nums.size();i++){
            elementSum += nums[i];
            digitSum += sumOfDigits(nums[i]);
        }
        return abs(elementSum- digitSum);
    }
};