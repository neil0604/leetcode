class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        vector<int> suf(n);
        suf[n-1]=satisfaction[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+satisfaction[i];
        }
        int j=0;
        while(j<n&&suf[j]<0){
           // if(suf[i]>0)
           j++;
        }
        int a=1;
        int sum=0;
        for(;j<n;j++){
            sum+=satisfaction[j]*a++;
        }

        return sum;
    }
};