class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) {
            return 0;
        }
        int size = prices.size();
        int profit = 0;
        int minPrice = prices[0];
        
        for (int buy = 0; buy < size - 1; buy++) {
            if (prices[buy] > prices[buy+1] && prices[buy] > minPrice) { // down
                profit += prices[buy] - minPrice;
                minPrice = prices[buy];
            }
            
            minPrice = min(minPrice, prices[buy]);
        }
        
        if (prices[size - 1] > minPrice) {
            profit += prices[size - 1] - minPrice;
        }
        
        return profit;
    }
};
