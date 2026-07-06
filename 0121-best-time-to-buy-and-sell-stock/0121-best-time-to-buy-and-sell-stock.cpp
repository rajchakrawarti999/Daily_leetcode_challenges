class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minprice = INT_MAX;
        int maxProfit = 0;

        for(int i=0; i<prices.size(); i++){
            if(prices[i] < minprice){
                minprice = prices[i];
            }

            int profit = prices[i] - minprice;

            if(profit > maxProfit){
                maxProfit = profit;
            }
        }
        return maxProfit;
    }
};