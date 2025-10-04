class Solution {
private:
    int helper(vector<int>& days, vector<int>& costs,int idx, vector<int>& dp){
        // base case
        if(idx>=days.size()) return 0;

      //  if(idx==days.size()-1) return costs[0];

        // oiperations
        if(dp[idx] != -1) return dp[idx];

      int  first=helper(days,costs,idx+1,dp)+costs[0];

        int second=1e9;
        int i=idx;
        while(i<days.size() && days[i]<days[idx]+7) i++;

        second=helper(days,costs,i,dp)+costs[1];

         int third=1e9;
         i=idx;
        while(i<days.size() && days[i]<days[idx]+30) i++;

        third=helper(days,costs,i,dp)+costs[2];

        return dp[idx]= min(first,min(second,third));

    }
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int cost=0;
         vector<int> dp(days.size()+1,-1);
         int n= days.size();
     return  helper(days,costs,0,dp);
     //  return  dp[n];
    }
};