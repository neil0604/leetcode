class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        vector<long> pre(n);
        vector<long> suf(n);
        int cnt=0;
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+nums[i+1];
        }
        for(int i=0;i<n;i++){
            cout<<suf[i]<<" ";
        }cout<<endl;
        for(int i=0;i<n;i++){
            pre[i]=pre[i]-suf[i];
            if(pre[i]>=0) cnt++;
        }
        if(pre[n-1]>=0) cnt--;
        return cnt;

    }
};