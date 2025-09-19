class Solution {
private:
    int f(vector<int> & weight,int mid){
        int n=weight.size();
        int days=1;
        int sum=0;
        for(int i=0;i<n;i++){

            if(sum+weight[i] > mid){
                days++;
                sum=weight[i];
            }
            else {
                sum+=weight[i];
            }
        }
        return days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0;
        int maxi=0;
        int ans=0;
        for(auto weight : weights){
            sum+=weight;
            maxi=max(maxi,weight);
        }

        int low=maxi,high=sum;

        while(low<=high){
            int mid=(low+high)/2;

            int requiredDays = f(weights,mid);
            if(requiredDays <= days) {
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;

            }
        }
        return ans;
    }
};