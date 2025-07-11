class Solution {
public:
    int maxDepth(string s) {
int maxi=0,n=s.size();
stack<int> st;
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push('(');
            else if(s[i]==')') {
                if(maxi < st.size()){
                    maxi=st.size();
                }
                st.pop();
            }
        }
        return maxi;
    }
};