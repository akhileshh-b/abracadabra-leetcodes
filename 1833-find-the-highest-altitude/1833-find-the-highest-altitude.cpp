class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alts;
        int n = gain.size();
        alts.push_back(0);
        alts.push_back(gain[0]);
        for(int i=1;i<n ;i++){
            int x = alts[i]+gain[i];
            alts.push_back(x);
        }
        sort(alts.begin(),alts.end());
        return alts[n];
    }
};