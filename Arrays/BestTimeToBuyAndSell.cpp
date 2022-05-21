class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();           
            int tmpBuyingIndex = 0;           
            int profit = 0;
            for (int i = 0; i < n; ++i)
            {
                
                if (prices[tmpBuyingIndex] > prices[i])
                {
                    tmpBuyingIndex = i;
                }
                
                else if (prices[i] - prices[tmpBuyingIndex] > profit)
                {
                    profit = prices[i] - prices[tmpBuyingIndex];                   
                }
            }
            return profit;
        
    }
};//TC : O(n)
