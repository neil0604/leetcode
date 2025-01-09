class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=words.size();
        int m=pref.size();
        int i=0;
        int cnt=0;
        while(i<n){
            string ele=words[i].substr(0,m);
            if(ele==pref) cnt++;
        i++;
        }
        return cnt;
    }
};