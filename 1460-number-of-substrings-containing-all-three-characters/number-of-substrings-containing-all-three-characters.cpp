class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char,int> st;
        int cnt=0;
        int n=s.size();
        int l=0,r=0;
        while(r<n){

            st[s[r]]++;
            while(st.size()==3){
                cnt=cnt+(n-r);
                st[s[l]]--;
              if(st[s[l]]==0)  st.erase(s[l]);
                l++;
                
            }
            r++;
           
        }
        return cnt;
    }
};