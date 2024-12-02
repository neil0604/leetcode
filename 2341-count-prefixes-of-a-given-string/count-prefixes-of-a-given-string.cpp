class Solution {
public:
    int countPrefixes(vector<string>& w, string s) {
        int n=s.size();
        vector<string> pre(n);
        string p="";
        for(int i=0;i<n;i++){

             p=p+s[i];
             pre[i]=p;
        }
        int c=0;
        for(int j=0;j<n;j++)
        for(int i=0;i<w.size();i++){
            if(w[i]==pre[j]) c++;
        }
        return c;

    }
};