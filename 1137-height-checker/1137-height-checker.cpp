class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        int n= heights.size();
        vector<int> h2 = heights;
        sort(h2.begin(),h2.end());

        for(int i=0;i<n;i++){
            if(heights[i]!=h2[i]){
                count++;
            }
        }
        return count;
    }
};