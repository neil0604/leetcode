class Solution {
public:
    int characterReplacement(string s, int k) {
        

        // works on the principle ((right-left+1)-maxfrequency <= k)
        int maxi=0;
        int n=s.size();
        unordered_map<char,int> mp;
        int maxfrequency=0;
        int left=0,right=0;
        while(right<n){
                mp[s[right]]++;
                maxfrequency=max(maxfrequency,mp[s[right]]);
            while((right-left+1) - maxfrequency > k){
                mp[s[left]]--;
                if(mp[s[left]]==0) mp.erase(s[left]);
                left++;
                for(int i=0;i<mp.size();i++) maxfrequency=max(maxfrequency,mp[s[i]]);
            }
            maxi=max(maxi,right-left+1);
            right++;
        }

        return maxi;
    }
};