class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // remove duplicates
        unordered_set<int> st;
        vector<int> ans;
        for(auto ele : nums){
            st.insert(ele);
        }
        for(auto ele : st){
            ans.push_back(ele);
        }
        sort(ans.begin(),ans.end());
        // remove duplicates
int n = ans.size();
int maxi=1;
if(n==0) return 0;
        for(int i=0;i<n;i++){
           int j=i;
            while(j < n-1 && ans[j]+1 == ans[j+1]){
                j++;
            }
            maxi=max(maxi,j-i+1);
            i = j;
        }

        return maxi;
    }
};