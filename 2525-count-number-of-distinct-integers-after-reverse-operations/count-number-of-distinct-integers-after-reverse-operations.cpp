class Solution {
public:
    int reverse(int x){
        int p=0;
        while(x>0){
          //  int d=x%10;
            p=p*10+x%10;
            x=x/10;
        }
        return p;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int rev=reverse(nums[i]);
           st.insert(rev);
        }
        
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        
        return st.size();
        
    }
};