class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        // logically traverse the array twice
        int n=nums.size();
        vector<int> ans(n);
        int m=n*2;
        stack<int> st;
        st.push(nums[n-1]);
        for(int i=m-2;i>=0;i--){
            while(!st.empty() && st.top() <= nums[i%n]) st.pop();
            //operations

            if(i<n){
                //start printinh in array result
                if(!st.empty())
                ans[i]=st.top();
                else ans[i]=-1;
            }
            //push the current object
            st.push(nums[i%n]);
        }
        return ans;
    }
};