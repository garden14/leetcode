class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0) return 0;
        int INF = 1e9;
        vector<int>dp(amount + 1, INF);
        dp[0]=0;

        for(auto i = 1;i <= amount; ++i){
            for(auto coin : coins){
                if(i - coin >= 0){
                    dp[i] = min(dp[i], dp[i-coin] + 1);
                }
            }
        }
        return (dp[amount] == INF ? -1 : dp[amount]);
        
    }
};