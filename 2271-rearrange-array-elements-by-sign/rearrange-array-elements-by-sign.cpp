class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int a=0,b=0;
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i] > 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        for(int i=0;i<n && a<pos.size() && b<neg.size();i++){
            if(i%2==0){
              ans.push_back(pos[a]);
              a++;
            }else {ans.push_back(neg[b]);
            b++;}
        }
        
        if(a==pos.size()){
            for(int i=b;i<neg.size();i++){
                ans.push_back(neg[i]);
            }

        }
         if(b==neg.size()){
            for(int i=a;i<pos.size();i++){
                ans.push_back(pos[i]);
            }

        }
        return ans;
    }
};