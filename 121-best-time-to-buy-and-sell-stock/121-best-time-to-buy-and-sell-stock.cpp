class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX, maxprofit=0;
        for(int i=0;i<prices.size();i++){
            mini=min(mini, prices[i]);
            maxprofit=max(maxprofit, prices[i]-mini);
        }
        return maxprofit;
    }
};