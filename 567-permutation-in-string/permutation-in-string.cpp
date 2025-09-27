class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n=s1.size();
        int m=s2.size();
        unordered_map<int,int> mp;
        int cnt=0;
        for(char c : s1){
            mp[c]++;
        }

        for(int i=0;i<=m-n;i++){
            string str=s2.substr(i,n);
            unordered_map<int,int> copy=mp;

            for(auto ele : str){
                copy[ele]--;
                if(copy[ele]==0) copy.erase(ele);
            }
            if(copy.empty()) cnt++;
        }
        return cnt;
    }
};