class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxw = 1;
        int n = accounts.size();
        int n1=accounts[0].size();
        for(int i=0;i<n;i++){
            int wealth=0;
            for(int j=0;j<n1;j++){
                wealth = wealth + accounts[i][j];
            }
            maxw = max(maxw,wealth);
        }
        return maxw;
    }
};