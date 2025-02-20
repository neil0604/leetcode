class Solution {
public:
    void f(string ans,vector<string> &result,int &n){

        if(ans.size()==n){
            result.push_back(ans);
            return;
        }
        f(ans+"0",result,n);
        f(ans+"1",result,n);

    }
    string findDifferentBinaryString(vector<string>& nums) {
        vector<string> result;
        int n=nums.size();
        f("", result,n);
        
        unordered_set<string> st;
        for(int i=0;i<result.size();i++){
            st.insert(result[i]);
        }
        for(int i=0;i<n;i++){
            if(st.find(nums[i])!=st.end()){
                st.erase(nums[i]);
            }
        }
        for(auto ele : st){
            return ele;
        }
        return "0";
    }
};