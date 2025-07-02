// Last updated: 7/2/2025, 5:43:19 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp= 9999999999999999;
        int maxProfit = 0;
        int n = prices.size();
        for(int i=0; i<n;i++){
            minp = min(minp,prices[i]);
            maxProfit= max(maxProfit,prices[i]-minp);
        }
        return maxProfit;
     
    }
};