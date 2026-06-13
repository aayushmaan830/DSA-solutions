class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min1=prices[0];
        int profit=0;
        for(int i=1;i<n;i++){
                min1=min(min1,prices[i-1]);
                if(prices[i]>min1){
                    profit=max(profit,prices[i]-min1);
                }
        }
        return profit;
    }
};