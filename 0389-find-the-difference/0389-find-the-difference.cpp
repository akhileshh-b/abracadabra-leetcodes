class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<s.size();i++){
            sum1 = sum1+int(s[i]);
        }
        for(int i=0;i<t.size();i++){
            sum2=sum2+int(t[i]);
        }
        int ans;
        ans = sum2-sum1;
        char ch = (char)ans;
        return ch;
    }
};