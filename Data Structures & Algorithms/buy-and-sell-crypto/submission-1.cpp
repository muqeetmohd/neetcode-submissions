class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int l = 0, r = 1, res = 0;

    while(r < prices.size()) {

        res = max(res, prices[r] - prices[l]);

        if(prices[r] < prices[l]) {
            l = r;
            r++;
            continue;
        }
        r++;

    }

    return res;
        
    }
};
