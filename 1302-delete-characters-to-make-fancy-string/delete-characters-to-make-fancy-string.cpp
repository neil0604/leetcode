class Solution {
public:
    string makeFancyString(string s) {
        int n=s.size();
        string ans="";
        bool flag=false;
        for(int i=0;i<n;i++){
            ans+=s[i];
            int j=i+1;
            while(s[i]==s[j]){
                j++;
                flag=true;

            }
            if(flag){ans+=s[i];
            flag=false;
            i=j-1;}


        }
        return ans;
        
        
    }
};