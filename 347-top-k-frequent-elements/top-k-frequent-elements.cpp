class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        

        int n=nums.size();
        unordered_map<int,int> mp;
        for(auto ele : nums){
            mp[ele]++;
        }
        // store {count,list of all elements with same count}
        vector<vector<int>> ans(n+1,vector<int> ());
        for(auto ele : mp){
            ans[ele.second].push_back(ele.first);
        }
        vector<int> result;
        for(int i=n;i>=0;i--){

            for(auto child : ans[i]){
                if(k==0) {
                    return result;
                }
                result.push_back(child);
                k--;
            }
            
        }
        return result;
    }
};