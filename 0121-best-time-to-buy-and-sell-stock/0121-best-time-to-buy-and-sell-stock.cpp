class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int sell = 0;
        int buy = prices[0];

        for(int i=0; i<n; i++){

            sell = max(sell, prices[i]-buy);
            if(prices[i] < buy){
                buy = prices[i];
            }
        }
        return sell;
    }
};