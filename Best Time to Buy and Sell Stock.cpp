// haha
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = 0x3f3f3f3f;
        int maxprofit = 0;
        for(auto i : prices)
        {
            maxprofit = max(maxprofit , i-minprice);
            minprice = min(minprice, i);
        }
        return maxprofit;
    }
};
