int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int sp=0;
        int n = prices.size();
        for(int i=0;i<n;i++){

            mini = min(mini, prices[i]);
            sp = max(sp, prices[i]-mini);
        }
           
            
        return sp;
    }