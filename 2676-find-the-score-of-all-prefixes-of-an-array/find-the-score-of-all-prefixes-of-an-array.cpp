class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> cover(n);
        int max1=-100;
       // vector<long long> pre(n);
        for(int i=0;i<n;i++){
            

            max1=max(max1,nums[i]);
            cover[i]=nums[i]+max1;

            }
           // pre[0]=cover[0];
        for(int i=1;i<cover.size();i++){
            cover[i]=cover[i-1]+cover[i];
        }  

        return cover;  
        }
    
};