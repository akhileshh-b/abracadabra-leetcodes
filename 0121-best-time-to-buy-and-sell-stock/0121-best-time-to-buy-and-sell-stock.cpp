class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int minprice=prices[0];
        int maxprofit=0;
        for(int i=1;i<n;i++){
            if(prices[i] < minprice){
                minprice=prices[i];
            }
            else{
                maxprofit = max(maxprofit, prices[i]-minprice);
            }
        }
        return maxprofit;
    }
};