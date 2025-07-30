class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int min_profit=prices[0];
        int max_profit=0;
        for(int i =1; i< prices.size(); i++){
            int profit = prices[i]-min_profit;
            max_profit = max(max_profit, profit);
            min_profit = min(min_profit, prices[i]);
        }
        return max_profit;
    }
};
