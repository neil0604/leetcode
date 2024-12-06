class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n+1);
        v[0]=-1;
        for(int i=0;i<n;i++){
            int ch=nums[i];
            v[ch]=-1;

        }
        vector<int> v1;
        for(int i=0;i<n+1;i++){
            if(v[i]!=-1){
                v1.push_back(i);
            }
        }
        return v1;

        
    }
};