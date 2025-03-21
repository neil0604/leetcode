class Solution {
    int helper(vector<int> &nums,int goal){
        long long l=0,r=0,sum=0;
        int n=nums.size();
        int cnt=0;
        while(r<n){

            sum+=nums[r];
            while(sum > goal){
                cout<<"here"<<endl;
                sum-=nums[l];
                l++;
            }
            if(sum<=goal) cnt+=(r-l+1);

            r++;
        }
        cout<<endl;
        return cnt;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
int a=0,b=0;
     if(goal!=0)  a =  helper(nums,goal-1);
         b = helper(nums,goal);
if(goal==0) return b;
        return b-a;
        
    }
};