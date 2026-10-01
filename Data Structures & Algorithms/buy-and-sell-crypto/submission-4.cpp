class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int res = 0;

        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < mini) {
                mini = prices[i];
            }

            res = max(prices[i] - mini, res);
        }

        return res;
        
    }
};
