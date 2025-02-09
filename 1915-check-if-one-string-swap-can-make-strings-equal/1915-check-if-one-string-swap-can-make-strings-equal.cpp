class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int uneq = 0;
        vector<int> diff;
        for(int i=0;i<s1.size();i++) {
            if (s1[i]!=s2[i]) { 
                uneq++;
                diff.push_back(i);  
                if(uneq > 2) return false;
            }
        }
        
        if(uneq==0) return true; 
        if(uneq!=2) return false; 
        
        return (s1[diff[0]]==s2[diff[1]] && s1[diff[1]]==s2[diff[0]]);
    }
};
