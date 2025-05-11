class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum = sum + nums.at(i);
        }
        int sOfNumbers = (n*(n+1)/2);
        return sOfNumbers-sum;
    }
};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n = nums.size();
//         int ans;
//         for(int i=0;i<n;i++){
//             if(nums.at(i) != i){
//            ans = i;
//            break;
//             }
//         }
//         return ans;
//     }
// };