class Solution {
public:
    int maxProfit(vector<int>& p) {
int N=p.size();
int i=0;
        while(i<N-1){
            if(p[i]<p[i+1]) break;
            i++;
        }
int maxi=INT_MIN,mini=INT_MAX;
        if(i==N-1) return 0;

        for( i=0;i<N;i++){
            mini=min(mini,p[i]);
          int  ans=p[i]-mini;
          cout<<ans<<" ";
            maxi=max(maxi,ans);
        }

        return maxi;
    }
};