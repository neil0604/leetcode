class Solution {
private:
    bool f(vector<int> & bloom,int mid,int k,int m){
        int n=bloom.size();
        vector<int> count(n);
        int j=0;
        for(auto ele : bloom){
            if(ele <= mid) count[j]=1;
            j++;
        }
        // applying sliding window of side k and will work till m 
        int sum=0;
        int left=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            sum+=count[i];
            // window size of k
            if(i-left+1 >= k){
                if(sum==k) {cnt++;
                sum=0;
                left=i+1;
                continue;

                }
                if(cnt==m) return true;
                sum-=count[left];
                left++;
            }
        }
        return cnt >= m;
    }
public:
    int minDays(vector<int>& bloom, int m, int k) {
        int maxi=0;
        for(auto ele : bloom) maxi=max(maxi,ele);
        //taling low and high as days
        int high=maxi;
        int low=1;
        int n=bloom.size();
        int ans=0;
        if(n< (long long)m*k ) return -1;

        while(low<=high){
            int mid=(low+high)/2;

            if(f(bloom,mid,k,m)==true){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};