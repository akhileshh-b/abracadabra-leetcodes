class Solution {
public:
    vector<int> getRow(int n) {
        vector<long long> row(n + 1, 1);
        for (int r= 1; r < n; r++){
            row[r] = row[r - 1] * (n-r+1) / r;
        }
        return vector<int>(row.begin(), row.end()); 

    }
};