class Solution {
public:
    int isPrefixOfWord(string s, string sw) {
        s+=" ";
        stringstream ss(s);
        string temp;
        int n=sw.size();
        int a=1;
        while(ss >> temp){
            if(temp.size()>=n){
            string ans=temp.substr(0,n);
            if(sw==ans) return a;
        }
        a++;
        }
        return -1;
    }
};