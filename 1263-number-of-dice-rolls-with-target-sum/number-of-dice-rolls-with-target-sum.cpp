#define ll long long int;
class Solution {
public:
vector<vector<int>> dp;
int f(int n,int k,int target){
    if(n < 0) return 0;
    if(target==0 and n==0) return 1;
    // if(target==1)return 1;
    // if(target==2) return 2;
      if(dp[n][target]!=-1) return dp[n][target];
    long long res=0;
    
    for(int i=1;i<=k;i++){
      if(target-i < 0) continue;
         res= res + f(n-1,k,target-i);
    }
    
    return dp[n][target] =  res%1000000007;
}
    int numRollsToTarget(int n, int k, int target) {
        dp.resize(35,vector<int> (10005,-1));
        return f(n,k,target);
    }
};