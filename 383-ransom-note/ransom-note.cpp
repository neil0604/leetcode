class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        

        map<char,int> mp;
        for(auto ele : ransomNote){
            mp[ele]++;
        }

        for(auto ele : magazine){
            if(mp.find(ele)!=mp.end()){
                mp[ele]--;
                if(mp[ele]==0) mp.erase(ele);
            }

        }
       return mp.size()==0;
    }
};