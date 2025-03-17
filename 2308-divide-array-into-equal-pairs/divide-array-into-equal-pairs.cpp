class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();
        n=n/2;
        int cnt=0;
        for(auto ele : nums){
            mp[ele]++;
            if(mp[ele]==2){
                cnt++;
                mp[ele]=0;
            }
        }
        cout<<cnt;
        return n==cnt;
        
   
    }
};