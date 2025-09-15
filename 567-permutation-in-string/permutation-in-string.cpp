class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // find all permutations of string s1
        //fill them in set 
        //take a window of s1.size and check in set if present

        // finding all permutation of s1
        int n=s1.size();
        int m=s2.size();
        unordered_map<char,int> mp;

        for(auto c : s1){
            mp[c]++;
        }
        for(int i=0;i<=m-n;i++){
            unordered_map<char,int> mpp=mp;
           bool flag=true;
            string check = s2.substr(i,s1.size());
          //  cout<<check<<" ";
            for(char c :  check){
                mpp[c]--;
            }
            for(auto pair : mpp) {
                if(pair.second != 0) {flag=false;
                break;}
            }
            if(flag!=false) return true;

        }
        return false;
    }
};