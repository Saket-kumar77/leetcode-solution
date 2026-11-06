class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int current=prices[0],profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>current){
                profit+=prices[i]-current;
                current=prices[i];
            }
            else
            current=prices[i];
        }
        return profit;
    }
};