class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0;
        int right=0;
        int res=0;
        set<char> st;
        while(right<n){
            //checking for duplicates in set
            if(st.find(s[right])==st.end()) {

                st.insert(s[right]);
                res=max(res,right-left+1);
            }
            else{   //found duplicate
            while(left<right && st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            }
           // res=max(res,right-left+1);
            right++;

                
            }
        return res;
    }
};