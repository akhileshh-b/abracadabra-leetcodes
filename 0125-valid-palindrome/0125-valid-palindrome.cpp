class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        for(auto it:s){
            if((it>=65 && it<=90)||(it>=97 && it<=122)){
                s2.push_back(tolower(it));
            }
            else if((it>=48)&&(it<=57)){
                s2.push_back(it);
            }
        }
        int n = s2.size();
        for(int i=0;i<n/2;i++){
            if(s2[i]!=s2[n-1-i]){
                return false;
            }
        }
        return true;
    }
};