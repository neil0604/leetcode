class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
     // works like next greater
    
     int n=temp.size();
      vector<int> ans(n);
     stack<pair<int,int>> st;
        st.push({temp[n-1],n-1});
     for(int i=n-2;i>=0;i--){
        while(!st.empty() && st.top().first <= temp[i]){
            st.pop();
        }

        if(!st.empty()) ans[i]=st.top().second-i;
        else ans[i]=0;

        // push the present value
        st.push({temp[i],i});
     }   
     return ans;
    }
};