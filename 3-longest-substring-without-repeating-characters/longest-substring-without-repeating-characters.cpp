class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        unordered_set<char> mp;
int left=0;
int maxi=1;
        for(int r=0;r<s.size();){



            if(mp.find(s[r])==mp.end()){
              
                mp.insert(s[r]);
                maxi=max(maxi,r-left+1);
                 r++;
                
            }else{
                mp.erase(s[left]);
                left++;
            }

         //   maxi=max(maxi,r-left+1);

            
            

        }
return maxi;
    }
};