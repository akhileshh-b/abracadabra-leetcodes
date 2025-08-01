class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        for(int i=0;i<n;i++){
            if((i+1)%3 == 0 && (i+1)%5==0){
                ans[i]="FizzBuzz";
            }
            else if((i+1)%3==0){
                ans[i]="Fizz";
            }
            else if((i+1)%5==0){
                ans[i]="Buzz";
            }
            else{
                ans[i]=to_string(i+1);
            }
            
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<string> fizzBuzz(int n) {
//         vector<string> ans;
//         for(int i=1;i<=n;i++){
//             if(i%3==0 && i%5==0){
//                 ans.push_back("FizzBuzz");
//             }
//             else if(i%3==0){
//                 ans.push_back("Fizz");
//             }
//             else if(i%5==0){
//                 ans.push_back("Buzz");
//             }
//             else{
//                 ans.push_back(to_string(i));
//             }
//         }
//         return ans;
//     }
// };