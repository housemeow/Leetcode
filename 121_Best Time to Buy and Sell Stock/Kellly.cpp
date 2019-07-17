class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) {
            return 0;
        }
        
        int maxProfit = 0;
        int minPrice = prices[0];
        
        for(int buy = 1; buy < prices.size(); buy++) {
            maxProfit = max(maxProfit, prices[buy] - minPrice);
            minPrice = min(minPrice, prices[buy]);
        }
        
        return maxProfit;
    }
};
