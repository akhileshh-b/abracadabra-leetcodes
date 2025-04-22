class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prefix=1;
        int suffix = 1;
        vector<int> ans(n,1);
        for(int i=1;i<n;i++){
            prefix = prefix * nums[i-1];
            ans[i]=prefix;
        }
        for(int i=n-2;i>=0;i--){
            suffix = suffix * nums[i+1];
            ans[i]=ans[i]*suffix;
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector <int> parray(n,1);
//         vector <int> sarray(n,1);
//         vector <int> ansarray(n,1);
//         for(int i=1;i<n;i++){
//             parray[i]=parray[i-1]*nums[i-1];
//         }
//         for(int i=n-2;i>=0;i--){
//             sarray[i]=sarray[i+1]* nums[i+1];
//         }
//         for(int i=0;i<n;i++){
//             ansarray[i]=parray[i]*sarray[i];
//         }
//         return ansarray;
//     }
// };