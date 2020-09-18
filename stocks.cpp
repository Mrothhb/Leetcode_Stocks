class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size()==0)
            return 0;
        
        bool not_strict = false;
        int tmp = prices[0];
        int tmpPrice = 0;

        for(int i = 1 ; i<prices.size();i++){
            if(prices[i] > prices[i-1]){
                not_strict = true;
                break;
            }
        }
        if(!not_strict)
            return 0;
        
        for(int i = 1 ;i<prices.size();i++){
            if(prices[i]-tmp > tmpPrice){
                tmpPrice = prices[i]-tmp;
            }
            if(tmp>prices[i]){
                tmp = prices[i];
            }
        }
        return tmpPrice;
    }
};
