class Solution {
public:
    bool isAnagram(string s, string t) {
        int fa[26]={0};
        int n= s.size();
        for(int i=0;i<n;i++){
            fa[s[i]-'a']++;
        }
        int nt=t.size();
        for(int i=0;i<nt;i++){
            fa[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(fa[i]!=0){
                return false;
            }
        }
        return true;
            }
};