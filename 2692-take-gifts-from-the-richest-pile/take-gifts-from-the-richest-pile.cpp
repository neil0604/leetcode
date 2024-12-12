class Solution {
public:
    long long pickGifts(vector<int>& g, int k) {
        int i=1;
        int n=g.size();
        while(i<=k){
            //max finding
        int maxi=0;
        int idx=-1;
            for(int j=0;j<n;j++){
                if(g[j]>maxi){
                    maxi=g[j];
                    idx=j;
                }

            }
        double x=sqrt(maxi);
        g[idx]=floor(x);
        i++;


        }
        long long sum=0;
        for(long i=0;i<n;i++){
            sum=sum+g[i];
        }
        return sum;
    }
};