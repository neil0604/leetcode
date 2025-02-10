class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isalpha(s[i])){
                char ch=s[i];
                st.push(ch);
            }else if(st.size()!=0){
                st.pop();
            }
        }
        string ans="";
        int sm=st.size();
        for(int i=0;i<sm;i++){
            ans=ans+st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};