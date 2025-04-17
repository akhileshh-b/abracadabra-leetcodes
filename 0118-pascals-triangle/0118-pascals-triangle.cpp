class Solution {
public:
    vector<int> ncr(int n) {
    vector<int> ncr(n + 1);
    ncr[0] = 1; 

    for (int r = 1; r <= n; r++) {
        ncr[r] = ncr[r - 1] * (n - r + 1) / r;
    }

    return ncr;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i=0;i<numRows;i++){
            vector<int> temp = ncr(i);
            ans.push_back(temp);
        }
        return ans;
    }
};