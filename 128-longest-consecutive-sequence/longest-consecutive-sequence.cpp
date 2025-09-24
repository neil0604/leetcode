class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int n=nums.size();
        if(n==0 || n==1) return n;
        for(int num : nums){
            st.insert(num);
        }
        int maxi=0;

        for(auto num : st){
            if(st.find(num-1)==st.end()){

                // count using while loop
                int sum=0;
                int i=num;
                while(st.find(i)!=st.end()){
                    i++;
                    sum++;
                }
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};