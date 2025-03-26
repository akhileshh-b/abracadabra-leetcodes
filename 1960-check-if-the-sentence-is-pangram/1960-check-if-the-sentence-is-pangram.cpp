class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> mp;
        for(char it:sentence){
            mp[it]++;
        }
        if(mp.size()==26){
            return true;
        }
        else return false;
    }
};