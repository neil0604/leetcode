class Solution {
private:
    int f(int n,vector<int> &vec){
        if(n==1 || n==2) return n;

        if(vec[n]!=-1) return vec[n];
        else return vec[n] = f(n-1,vec) + f(n-2,vec);
    }
public:
    int climbStairs(int n) {
        vector<int> vec(n+1,-1);
        f(n,vec);
        if(n==1 || n==2) return n;
        return vec[n];
        
    }
};