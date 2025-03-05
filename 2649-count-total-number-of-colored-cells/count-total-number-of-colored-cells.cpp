class Solution {
    
public:
    long long coloredCells(int n) {
        vector<long long> ans(n);
        if(n==1) return n;
        long long b=1;
        long long j=1,a=1;
        for(int i=1;i<n;i++){
            b=b+2;
            long long x=b+2*j;
            ans[i]=x;
            a=a+2;

            j=j+a;
        }

    return ans[n-1];
    }
};