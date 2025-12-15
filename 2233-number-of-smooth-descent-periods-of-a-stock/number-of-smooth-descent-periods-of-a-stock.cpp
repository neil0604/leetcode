class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int last=1e9;
        long long cnt=0;
        int n=prices.size();
        int left=0;
        int right=0;
        while(right<n){
            if(last-prices[right]==1 ){
                
                cnt+=right-left+1;
                 last=prices[right];
                // else if(left==right) cnt++;
            }
            else{
                cnt++;
                left=right;
                last=prices[right];
            }
          //  cout<<cnt<<" "<<prices[right]<<endl;
            right++;
            
        }
        return cnt;
    }
};