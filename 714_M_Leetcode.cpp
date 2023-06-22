class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
      int profit = 0;
      int effectiveBuyPrice = prices[0];
      for(int i=0;i<prices.size();i++){
          profit = max(profit,prices[i]-effectiveBuyPrice-fee);
          effectiveBuyPrice = min(effectiveBuyPrice, prices[i]-profit);
      }
      return profit;
    }
};