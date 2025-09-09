class Solution {
     const static int mod=1e9+7;
private:
    int f(int n,int d,int forget,vector<int> &dp,int idx){

        if(dp[idx]!=-1) return dp[idx];
        int c=(idx+forget-1 >= n);
        for(int j=d;j<forget;j++){
            if(idx+j > n) break;
            c = (c + f(n,d,forget,dp,idx+j)) % mod ;
        }

        return dp[idx] =  c;
    }
public:
    int peopleAwareOfSecret(int n, int d, int forget) {
        
        int i=1;
        vector<int> dp(n+1,-1);

       return f(n,d,forget,dp,i);
    }
};