class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            if(asteroids[i] < 0){
                //left direction movment 
                while(!st.empty() && st.top() > 0 && st.top()<abs(asteroids[i])) st.pop();
                
                 if(st.size()==0 || st.top()< 0) st.push(asteroids[i]);
                 else if(st.top()==abs(asteroids[i])) st.pop();
            }
            //push the asteroid of right direction
           else st.push(asteroids[i]);
        }
        vector<int> ans(st.size());
        for(int i=st.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};