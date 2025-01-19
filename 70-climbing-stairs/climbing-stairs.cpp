class Solution {
int climbStairs1(int n,vector<int> &v) {
        if(n==1) return 1;
        if(n==2) return 2;
        if(v[n]!=-1) return v[n];
        return v[n] = climbStairs1(n-1,v) + climbStairs1(n-2,v);
    }
public:
    int climbStairs(int n) {
        vector<int> v(n+1,-1);
      return climbStairs1(n,v);
    }
};