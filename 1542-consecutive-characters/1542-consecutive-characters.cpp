class Solution {
public:
    int maxPower(string s) {
        int count=1, maxcount=1;
        int n=s.size();
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
            count++;
            maxcount=max(count,maxcount);
            }
            else{
                count=1;
            }
        }
        return maxcount;
    }
};