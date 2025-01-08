class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(), candies.end());
        int n = candies.size();
        vector<bool> output;
        for(int i =0;i<n;i++){
            if(candies[i]+extraCandies >=max){
                output.push_back(true);
            }
            else{
                output.push_back(false);
            }
        }
        return output;
    }
};