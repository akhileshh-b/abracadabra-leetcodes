class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (string& word : words) {
            int n = word.size();
            bool isPalin = true;
            for (int i = 0; i < n / 2; ++i) {
                if (word[i] != word[n - 1 - i]) {
                    isPalin = false;
                    break;
                }
            }
            if (isPalin) {
                return word;
            }
        }
        return "";
    }
};


// class Solution {
// public:
// bool ispalindrome(string s){
//     int n = s.size();
//     for(int i=0;i<n/2;i++){
//         if(s[i]!=s[n-1-i]){
//             return false;
//         }
//     }
//     return true;
// }
//     string firstPalindrome(vector<string>& words) {
//         for(auto it:words){
//             if(ispalindrome(it)){
//                 return it;
//             }
//         }
//         return "";
//     }
// };

