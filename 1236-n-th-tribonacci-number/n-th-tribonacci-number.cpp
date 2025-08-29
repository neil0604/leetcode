class Solution {
private:
   int fibo(int n,vector<int> & dp){

    if(n==0 || n==1) return n;
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
   int  One=fibo(n-1,dp);
   int Two=fibo(n-2,dp);
   int three=fibo(n-3,dp);
    return dp[n] = One + Two + three;
   }
public:
    int tribonacci(int n) {
        if(n==0 || n==1) return n;
        vector<int> dp(n+1,-1);
    long long sum=0;
        for(int i=n;i>=0;i--){
          sum = sum +  fibo(i,dp);
          
        }
        for(auto ele : dp){
            cout<<ele<<" ";
        }
return dp[n];
    }
};