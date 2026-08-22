class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr_profit = 0;
        int max_profit = 0;
        int left = 0;
        

        for(int right = 1; right < prices.size(); right++)
        {
            if(prices[left] > prices[right])
            {
                left = right;
            }
            else
            {
                curr_profit = prices[right] - prices[left];
                max_profit = max(curr_profit , max_profit);
            }
        }
        return max_profit;
    }
};
