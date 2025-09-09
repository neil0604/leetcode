class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int maxi=INT_MIN;

        int n=s.size();
        if(n==0) return 0;
        unordered_set<int> st;
        int left=0,right=0;
        while(right<n){


            if(st.find(s[right])!=st.end()){
                //we need to remove it using left
                while(st.find(s[right])!=st.end()){
                    st.erase(s[left]);
                    left++;
                }

            }
            st.insert(s[right]);


            maxi=max(maxi,right-left+1);

            right++;
        }

        return maxi;
    }
};