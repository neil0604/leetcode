class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mp2[t[i]]++;
        }
        for(auto p : mp1){
            char key=p.first;
            int fre=p.second;
            if(mp2.find(key)!=mp2.end()){
                int fre2=mp2[key];
                if(fre != fre2) return false;
            }
            else return false;

        }
        return true;
    }
};