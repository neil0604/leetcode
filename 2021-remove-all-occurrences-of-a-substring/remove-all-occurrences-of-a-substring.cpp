class Solution {
public:
    string removeOccurrences(string s, string part) {
        int m=part.size();
        string ans=s;

        while(ans.find(part)!=string::npos){


            int res = ans.find(part);
            int last=res+m;
            string ans1=ans;
           ans1= ans1.substr(last);
           string  ans2=ans;
            ans2=ans2.substr(0,res);
            ans=ans2+ans1;
        }
        return ans;
    }
};