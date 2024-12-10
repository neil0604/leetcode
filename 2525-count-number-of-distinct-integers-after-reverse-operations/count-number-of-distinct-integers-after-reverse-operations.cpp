class Solution {
public:
    int reverse(int x){
        int p=0;
        while(x>0){
            int d=x%10;
            p=p*10+d;
            x=x/10;
        }
        return p;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int rev=reverse(nums[i]);
            nums.push_back(rev);
        }
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        
        return st.size();
        
    }
};