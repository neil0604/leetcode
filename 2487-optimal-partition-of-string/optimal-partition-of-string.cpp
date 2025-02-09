class Solution {
public:
    int partitionString(string s) {
        unordered_map<int,int> mp;
        int cnt=1;
        int n=s.size();
        for(int i=0;i<n;i++){

            char ch=s[i];
            if(mp.find(ch)!=mp.end()){
                mp.clear();
                cnt++;

            }
            mp[ch]=i;

        }
        return cnt;
    }
};