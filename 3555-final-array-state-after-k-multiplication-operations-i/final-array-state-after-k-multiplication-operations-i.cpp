class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {

        int n=nums.size();
        int a=0;
        while(a<k){
            int mn=INT_MAX;
            int idx=-1;
            for(int i=0;i<n;i++){
                if(nums[i]<mn){
                    mn=nums[i];
                    idx=i;
                }

            }
            cout<<a+1<<"  "<<idx<<endl<<endl;
            nums[idx]=nums[idx]*m;
            cout<<nums[idx]<<endl;
            a++;

        }


        return nums;
    }
};