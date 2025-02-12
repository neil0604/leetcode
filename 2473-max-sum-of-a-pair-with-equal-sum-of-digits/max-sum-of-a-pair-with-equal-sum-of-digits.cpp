class Solution {
public:
    int reverse(int n){
        int sum=0;
        while(n!=0){
            int d=n%10;
            sum+=d;
            n=n/10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        for(int i=0;i<n;i++){
            int res=reverse(nums[i]);
            v[i]=res;
        }
        unordered_map<int,int> mp;
        int maxi=-1;
        for(int i=0;i<n;i++){
            if(mp.find(v[i])!=mp.end()){
                int res=nums[mp[v[i]]]+nums[i];
                maxi=max(maxi,res);
                if(nums[mp[v[i]]] < nums[i]){
                     mp[v[i]]=i;
                }
            }else mp[v[i]]=i;
            

        }
        return maxi;
    }
};