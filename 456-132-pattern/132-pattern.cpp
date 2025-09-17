class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int n=nums.size();
        if (nums.size() < 3) {
            return false;
        }
        stack<pair<int,int>> st;
        vector<int> ans(n);
        int minPrev=nums[0];
        st.push({nums[0],1e9});
        for(int i=1;i<n;i++){
            while(!st.empty() && st.top().first <= nums[i]) st.pop();

            //operations
            if(!st.empty() &&  st.top().second < nums[i])
            return true;
            //psuh curret element
            st.push({nums[i],minPrev});
            minPrev=min(minPrev,nums[i]);
        }
        return false;
    }
};