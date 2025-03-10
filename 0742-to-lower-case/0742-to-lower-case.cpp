class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        return s;
    }
};

// class Solution {
// public:
//     string toLowerCase(string s) {
//         transform(s.begin(), s.end(), s.begin(), ::tolower);
//        return s; 
//     }
// };