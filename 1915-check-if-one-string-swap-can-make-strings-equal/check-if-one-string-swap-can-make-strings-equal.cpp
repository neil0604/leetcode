class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.size();
        if(n!=s2.size()) return false;
        if(s1==s2) return true;
        string ans;
        string ans2;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                continue;
            }else {
                ans=ans+s1[i];
                ans2=ans2+s2[i];
            }
            
        }

        // cout<<ans;
        // return ans.size()<=2;

if(ans.size()>2) return false;
            reverse(ans2.begin(),ans2.end());
            if(ans==ans2) return true;
            return false;



    }
};