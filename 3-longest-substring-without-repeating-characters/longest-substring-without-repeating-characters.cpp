class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> st;
        int left=0,right=0;
        int maxi=1;
        int n=s.size();
        if(n==0) return 0;
       for(right=0;right<n;right++){
            if(st.find(s[right])!=st.end()){

                while(left<=right && st.find(s[right])!=st.end()){
                    st.erase(s[left]);
                    left++;
                }
             
            }
            st.insert(s[right]);

            maxi=max(maxi,right-left+1);
       }
       return maxi;
    }
};